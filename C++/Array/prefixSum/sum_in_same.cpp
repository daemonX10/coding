#include <iostream>
#include <vector>
using namespace std;
void runningSum(vector<int>&v){
    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }
    return ;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v[i]=ele;
    }
    runningSum(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout <<endl;
    return 0;
}