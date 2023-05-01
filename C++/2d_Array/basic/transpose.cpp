#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int array[n][m];
    // input of array form user
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }
    // code for transpose of matrix
    int transpose [m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            transpose[i][j]=array[j][i];
        }
    }
    // output result 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<transpose[i][j]<<" ";
            if(j==m-1)cout<<'\n';
        }
    }
    return 0;
}