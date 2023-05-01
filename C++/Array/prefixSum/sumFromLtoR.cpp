#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int i=1;
    while(i<=n){
     cin>>v[i];
     i++;
    }
    for (int i = 1; i<=n; i++)
    {
       v[i]+=v[i-1];
       cout<<v[i]<<" ";
    }
    int l,r;
    cout<<endl<<"enter l";
    cin>>l;
    cout<<endl<<"enter r";
    cin>>r;
    cout<<v[r]-v[l]<<endl;
}