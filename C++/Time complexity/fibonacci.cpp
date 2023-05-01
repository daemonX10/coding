// #include <iostream>

// using namespace std;

// int main() {
// int n;
// cin>>n;    
// cout<<"enter the nth position ";
// int m;
// cin>>m;
// int array[n];
// array[0]=0;
// array[1]=1;
// for(int i=2;i<n;i++){
//     array[i]=array[i-1] +array[i-2];
// }
// n>m?  cout<<"here the your nth fibonacci number"<<array[m]: (cout<<"given position exceed from the array");

//     return 0;
// }

#include <iostream>

using namespace std;

int main() {
int n,a,c,b;
cin>>n;
if(n==0 || n==1){
    return n;
}
a=0;
b=1;
c=1;
for(int i=2;i<n;i++){
    c=a+b;
    a=b;
    b=c;
}
return c;
return 0;
}