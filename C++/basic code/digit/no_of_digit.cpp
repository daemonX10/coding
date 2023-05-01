#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter you number";
    cin>>n;
    int nt=0;
    while(n>0)
    {
        nt=n%10;
        n/=10;
    }
    cout<<nt<<endl;
    return 0;
}