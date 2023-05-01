#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    for(int ele:v){
        cout<<ele;
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}