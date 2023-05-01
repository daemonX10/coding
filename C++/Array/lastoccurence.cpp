#include <iostream>
 #include <vector>
 using namespace std;
 int main(){
    vector<int>v;
    
    for (int i = 0; i <6; i++)
    {   int n; 
        cin>>n;
        v.push_back(n);
    } int x=4;
   int occurence=-1;
   for (int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence=i;
        }
   }cout<<occurence;
   return 0;
 }