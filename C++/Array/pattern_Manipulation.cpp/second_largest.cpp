// #include <iostream>
// #include <climits>
// using namespace std;

// int largestElementIndex(int array[], int size){
//     int max=INT_MIN;
//     int second_max=INT_MIN;
//     for(int i=0; i<size;i++){
//         if(array[i]>max){
//             max=array[i];
//         }
//     }
//     for( int i=0;i<size;i++){
//         if( array[i]>second_max && array[i]!=max){
//             second_max=array[i];
//         }
//     }
//     return second_max;
// }

// int main(){
//     int array[]={3,4,6,5,7,7};
//     int indexOfLargest=largestElementIndex(array, 6);
//     array[indexOfLargest]=-1;
//     int indexOfSecondLargest= largestElementIndex ( array,6);
//     cout<<indexOfSecondLargest<<endl;
// }

#include <iostream>
#include <climits>
using namespace std;

int largestElementIndex(int array[], int size ){
    int max=INT_MIN;
    int second_max=INT_MIN;
    for(int i=0;i,i<size;i++){
        if(array[i]>max){
            second_max=max;
            max=array[i];
        } else if(array[i]>second_max &&  array[i]!=max){
            second_max=array[i];
        }
    }return second_max;
}

int main(){
    int array[]={3,4,6,5,7,7};
    int indexOfSecondLargest=largestElementIndex(array,6);
    cout<<indexOfSecondLargest<<endl;
}