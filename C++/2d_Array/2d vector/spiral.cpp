#include <iostream>
#include <vector>
using namespace std;
void spiralOrder(vector<vector<int>>&matrix){
int n=matrix.size();
int left=0;
int right=n-1;
int top=0;
int bottom=n-1;
int direction=0;// use as pointer and condition 
while(left<=right && top<=bottom){
if(direction==0){
    for(int col=left;col<=right;col++){//col is column and increase after each iteration from left to right
        cout<<matrix[top][col];
    }
    top++; // move a step down toward bottom as all element of first row is printed
}
else if(direction==1){
    for(int row=top;row<=bottom;row++){ // row increase from top to bottom
        cout<<matrix[row][right];
    }
    right--; // move a step toward left as all element from last columns(right) is printed
}
else if(direction==2){
    for(int col=right;col>=left;col--){
        cout<<matrix[bottom][col];
    }
    bottom--;// move up toward top
}
else{
    for(int row=bottom;row>=top;row--){
        cout<<matrix[row][left];
    }
    left++;//left move right toward right
}
direction=(direction+1)%4;
}
}
int main() {
int n;
cout<<"Declare the size of matrix";
cin>>n;
vector<vector<int>>matrix(n,vector<int>(n));
for(int i=0;i<n;i++){
        cout<<"enter the value of matrix"<<endl;
    for(int j=0;j<n;j++){
        cin>>matrix[i][j];
    }
}
spiralOrder(matrix);
cout<<"spiral operation is done , here is output : "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<matrix[i][j];
    }
    return 0;
}
}