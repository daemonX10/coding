// #include<iostream>
// #include<vector>
// using namespace std;
// void sortZeroAndOnes(vector<int>&v){
//     int Zeroes_count=0;
//     for(int ele:v){
//         if(ele==0)
//         Zeroes_count++;
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<Zeroes_count){
//             v[i]=0;
//         }
//         else{
//             v[i]=1;
//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v[i]=ele;
//     }
//     cout<<endl;
//     sortZeroAndOnes(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// using pointer from both side
#include <iostream>
#include <vector>
using namespace std;
void sortZeroesAndOnes(vector<int>&v){
   int left_ptr=0;
   int right_ptr=v.size()-1;
   while(left_ptr<=right_ptr){
    if(v[left_ptr]==1 && v[right_ptr]==0){
        swap(v[left_ptr],v[right_ptr]);
    }
    if(v[left_ptr]==0){
        left_ptr++;
    }
    if(v[right_ptr]==1)right_ptr--;
   }
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sortZeroesAndOnes(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    cout <<endl;
}