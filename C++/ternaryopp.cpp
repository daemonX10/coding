#include <iostream>
using namespace std;
int main() {
    int val;
    cout<<"enter value"<<endl;
    cin>>val;
    val%2==1 ? cout<<"value entered is odd": cout<<"value entered is even";
}