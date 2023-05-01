#include <iostream>
using namespace std;
int main(){
    int h,w;
    cin>>h>>w;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++)
        if((i+j)%2==0){
            cout<<".";
        }else {
            cout<<"*";
        }cout<<endl;
        
    }
}