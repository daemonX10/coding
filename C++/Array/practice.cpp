//  int main(){
//     vector<int>v;
//     for(int i=0;i<5;i++){
//         int n;
//         cin>>n;
//         v.push_back(n);
//     }
//     int x=5;
//     int count=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]>x)count++;
//     }cout<<count;
//  }

//  #include <iostream>
//  #include <vector>
//  using namespace std;
//  int main(){
//     int arr[]={1,2,3,4,5,6};
//     bool sortedflag=true;
//     for (int i=1;i<6;i++){
//         if(arr[i]<=arr[i-1]){
//             sortedflag=false;
//             }
//         } cout<<sortedflag;
//     return 0;
//  }

// #include <iostream>
// #include <climits>
// using namespace std;

// int largestelementindex(int array[], int size) {
//     int max = INT_MIN;
//     int maxindex = -1;
//     for (int i = 0; i < size; i++) {
//         if (array[i] > max) {
//             max = array[i];
//             maxindex = i;
//         }
//     }
//     return maxindex;
// }

// int main() {
//     int array[] = {2, 6, 5, 5, 1, 7};
//     int indexOfLargest = largestelementindex(array, 6);
//     array[indexOfLargest] = -1;
//     int indexOfSecondLargest = largestelementindex(array, 6);
//     cout << array[indexOfSecondLargest] << endl;
//     return 0;
// }

// #include <iostream>
// #include <climits>
// using namespace std;

// int largestElementIndex(int array[], int size){
//     int max=INT_MIN;
//     int second_max=INT_MIN;
//     for(int i=0; i<size;i++){
//         if(array[i]>max){
//             second_max=max;
//             max=array[i];
//         } else if (array[i]>second_max && array[i]!=max) {
//             second_max=array[i];
//         }
//     }
//     return second_max;
// }

// int main(){
//     int array[]={3,4,6,5,7,7};
//     int indexOfSecondLargest= largestElementIndex ( array,6);
//     cout<<indexOfSecondLargest<<endl;
// }


#include<iostream>
#include<vector>
using namespace std;

void sortZeroAndOnes(vector<int>&v){
    int zeroes_count=0;
    for(int ele:v){
        if(ele==0)
            zeroes_count++;
    }
    for(int i=0;i<zeroes_count;i++){
        v[i]=0;
    }
    for(int i=zeroes_count;i<v.size();i++){
        v[i]=1;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v[i]=ele;
    }
    sortZeroAndOnes(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}


