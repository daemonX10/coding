#include <iostream>
#include <vector>
using namespace std;

bool checkPrefixSuffixSum(vector<int>&v){
    int left_sum=0, left_ptr=0;
    int right_sum=0, right_ptr=v.size()-1;
   while(left_ptr<=right_ptr){
    if(left_sum<right_sum){
        left_sum+=v[left_ptr++];
    }
    else{
        right_sum+=v[right_ptr--];
    }
   }
   return left_sum==right_sum;
}


// bool checkPrefixSuffixSum(vector<int>&v){
//     int total_sum=0;
//     for(int i=0;i<v.size();i++){
//         total_sum+=v[i];
//     }
//     int prefix_sum=0;
//     for(int i=0;i<v.size();i++){
//         prefix_sum+=v[i];
//      int suffix_sum=total_sum-prefix_sum;
//      if(suffix_sum==prefix_sum){
//         return true;
//      }

//     }
//     return false;
// }
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
cout<<checkPrefixSuffixSum(v)<<endl;
}

