// brute force method
// #include <iostream>
// #include <vector>
// using namespace std;
// int rectangle_Sum(vector<vector<int>>&matrix, // create a variable  , variable such row and column 
// int l1,int r1,int l2,int r2){
// int sum=0;                                     // a sum for where the sum of matrix element matrix
// for(int i=l1;i<=l2;i++){ // here l1 & l2 and r1 & r2 act as row -- columns 
//     for(int j=r1;j<=r2;j++){
//         sum+=matrix[i][j]; // all element from given will get add one by one 
//     }
// }
// return sum;
// }
// int main() {
// int n,m;
// cin>>n>>m;
// vector<vector<int>>matrix(n,vector<int>(m));// create a vector and input 
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>matrix[i][j];
//     }
// }
// cout<<"enter the value of l1 ,r1,l2,r2"<<endl;
// int l1,r1,l2,r2;
// cin>>l1>>r1>>l2>>r2;                       // input 
// int sum=rectangle_Sum(matrix,l1,r1,l2,r2); // recall the function by mentioning all the variable and function 
// cout<<sum<<endl;
//  return 0;
// }



// method name= pri-calculating the horizontal sum for each row in the matrix .
// #include <iostream>
// #include <vector>
// using namespace std;
// int rectangle_sum(vector<vector<int>>&matrix,int l1,int r1,int l2, int r2,int n,int m){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             matrix[i][j]+=matrix[i][j-1];
//         }
//     }
//     for(int i=l1;i<=l2;i++){
//         if(r1==0){
//             sum+=matrix[i][r2];
//         }
//         else{
//             sum+=matrix[i][r2]-matrix[i][r1-1];
//         }
//     }
//     return sum;
// }
// int main() {
// int n,m;
// cin>>n>>m;
// vector<vector<int>>matrix(n,vector<int>(m));// create a vector and input 
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>matrix[i][j];
//     }
// }
// cout<<"enter the value of l1 ,r1,l2,r2"<<endl;
// int l1,r1,l2,r2;
// cin>>l1>>r1>>l2>>r2;                       // input 
// int sum=rectangle_sum(matrix,l1,r1,l2,r2,n,m); // recall the function by mentioning all the variable and function 
// cout<<sum<<endl;
//  return 0;
// }

// prefix sum over columns and Rows both
#include <iostream> 
#include <vector> 
using namespace std ;
int main(){
    int n,m;
    cin>>n>>m;
vector<vector<int>>matrix(n,vector<int>(m));
for(int i=0;i<matrix.size();i++){
    for(int j=0;j<m;j++){
        cin>>matrix[i][j];
    }
}
int top_sum,left_sum;
int topleft_sum=0;
if*l1!-0
    return 0;
}