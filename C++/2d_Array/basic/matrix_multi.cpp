#include <iostream>
using namespace std;
int main(){
    int r1,c1;
    cout<<"enter row for first matrix"<<endl;
    cin>>r1;
    cout<<"enter coloum for first matrix"<<endl;
    cin>>c1;
    int A[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
    }
    int r2,c2;
    cout<<"enter second matrix"<<endl;
    cout<<"enter row for second matrix"<<endl;
    cin>>r2;
    cout<<"enter coloum for second matrix"<<endl;
    cin>>c2;
    int B[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
}
// check if matrix can multipled
if(c1!=r2){
    cout<<"not possible";
}
int C[r1][c2];
for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        C[i][j]=0;
    for(int k=0;k<r2;k++){
        C[i][j]+=A[i][k]* B[k][j];
    }
    }
}
for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        cout<<C[i][j]<<" ";
        if(j==c2-1)cout<<endl;
    }
}
cout<<endl;
return 0;
}