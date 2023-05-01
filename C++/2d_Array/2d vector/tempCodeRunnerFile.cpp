#include <iostream>
#include<vector>
using namespace std;
int maximum_one_row(vector<vector<int>>&v){
    int maxOnes=INT8_MIN;
    int maxOneRow=-1;
    int columns = v[0].size();
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int numberOfOnes=columns-j;
                if(numberOfOnes>maxOnes){
                    maxOnes=numberOfOnes;
                    maxOneRow=i;
                }
                break;
            }
        }
    }
    return maxOneRow;
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
int res=maximum_one_row(v);
cout<<res<<endl;
    return 0;
}