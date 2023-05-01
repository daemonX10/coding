#include <iostream>

using namespace std;

// int main() {
// int x=18;
// int y=0;
// int *ptlr;
// cout<<&x<<endl;    // address of x using * 
// ptlr=&x;           // given the address of x
// cout<<*ptlr<<endl; // DEFERENCE OPERATOR --__ value in address of x -- //( * point the the value here as ptlr is already pointing the address of x)
// cout<<ptlr<<endl;        // address of x using pointer as ptlr
// int *ptr=&x;
// cout<<*ptr<<endl;  // value
// cout<<ptr<<endl;   // address of x
// cout<<&ptr<<endl;  // own address
//     return 0;
// }

int main(){
int x=20;
double dec=9.8;
int *ptr=&x;
cout<<" size of x "<<sizeof(x)<<"\n";
cout<<"dec "<<sizeof(dec)<<"\n";
cout<<ptr<<" "<<(*ptr+1);
    return 0;
}