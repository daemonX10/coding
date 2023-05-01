#include <iostream>
using namespace std;
int main(){
    int arr[]={3,4,5,12,18,11};
    int max=arr[0];
    for(int i=0;i<6;i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }cout<<max;
}
// need to change to vector form