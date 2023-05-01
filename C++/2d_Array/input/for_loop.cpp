#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arrary[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arrary[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arrary[i][j]<<" ";
        }
    }

    return 0;
}