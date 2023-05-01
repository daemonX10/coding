#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>>pascalTriangle(int n){
    vector<vector<int>>pascal(n);
    for(int i=0;i<n;i++){
         vector<int>&ith_vector = pascal[i];
        ith_vector.resize(i+1);
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                pascal[i][j]=1;
            }
            else{
                pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
            }
        }
    }
    return pascal;
}
int main(){
    int n;
    cin>>n;
    cout<<n;
    cout<<endl;
    vector<vector<int>>ans;
    ans=pascalTriangle(n);
    for(int i=0;i<ans.size();i++){
            for(int k=0;k<=n-i;k++){
                cout<<" ";}
        for(int j=0;j<=i;j++){
        
            cout<<ans[i][j]<<" ";
        }
     cout<<endl;
    }
    return 0;
}
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<vector<int>> pascalTriangle(int n){
//     vector<vector<int>> pascal(n);
//     for(int i=0; i<n; i++){
//         vector<int> ith_vector(i+1, 1);
//         for(int j=1; j<i; j++){
//             ith_vector[j] = pascal[i-1][j-1] + pascal[i-1][j];
//         }
//         pascal[i] = ith_vector;
//     }
//     return pascal;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>> ans = pascalTriangle(n);
//     for(int i=0; i<ans.size(); i++){
//         for(int j=0; j<ans[i].size(); j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
