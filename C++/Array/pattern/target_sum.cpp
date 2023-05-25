// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={3,4,6,7,1};
//     int targetsum=7;
//     int size=5;
//     int pair=0;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<=size;j++){
//             if(arr[i]+arr[j]==targetsum)pair++;
//         }
//     }cout<<pair;
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int arr[]={3,1,2,4,0,6};
    int result=0;
    int pair=0;
    int size=6;
    int targetsum=5;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==targetsum)pair++;
            }
        }
    }cout<<pair;
    return 0;
}
// explain the above code