#include <iostream>
using namespace std;
void process(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    *(arr+i)=33;
}
}
int main(){
int arr[3]={5,1,2};
process(arr,3);
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    cout<<arr[i]<<" ";
}
    return 0;
}