// #include <iostream>
// #include<vector>
// using namespace std;
// int maximum_one_row(vector<vector<int>>&v){
//     int maxOnes=INT8_MIN;
//     int maxOneRow=-1;
//     int columns = v[0].size();
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
//             if(v[i][j]==1){
//                 int numberOfOnes=columns-j;
//                 if(numberOfOnes>maxOnes){
//                     maxOnes=numberOfOnes;
//                     maxOneRow=i;
//                 }
//                 break;
//             }
//         }
//     }
//     return maxOneRow;
// }
// int main() {
// int n,m;
// cin>>n>>m;
// vector<vector<int>>v(n,vector<int>(m));
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cin>>v[i][j];
//     }
// }
// int res=maximum_one_row(v);
// cout<<res<<endl;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
// create a 2d vector function ( a 2d vector _ reference vector )
int leftMostRows (vector<vector<int>>&v){
    int maxOnes=0;
    int maxOnesRow=-1;
    int j=v[0].size(); // give no .of column _ size of rows 
    for(int i=0;i<v.size();i++){
      while(j>=0 && v[0][j]==1){
       int leftMostOne=j; // current columns index
       maxOnesRow=i;
      }
    }
    return maxOnesRow;
}
int main() {
int n,m;
cin>>n>>m;
vector<vector<int>>v(n,vector<int>(m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>v[i][j];
    }
}
int res=leftMostRows(v);
cout<<res<<endl;
    return 0;
}

