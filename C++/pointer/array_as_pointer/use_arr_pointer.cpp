#include <iostream>

using namespace std;

int main() {
int arr[3]={15,12,6};
int *ptr=&arr[0];
cout<<ptr<<" "<<arr<<endl;
cout<<*ptr<<" "<<*arr<<endl;
cout<<*(arr)<<" "<<*(arr+1)<<endl;
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){// here to add this part( sizeof(arr)/sizeof(arr[0]) )
    cout<<*(arr+i)<<"\n";
}
    return 0;
}