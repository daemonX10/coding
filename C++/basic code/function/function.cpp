/*  #include <iostream>
using namespace std;
int addition( int l,int m){
    int add=l+m;
    return add;
}


 int main(){
    int p=40;
    int q=60;
    int ans=addition(p,q);
    cout<<ans;
 } 
  */
/* #include <iostream>
using namespace std;
 void addition(int l ,int m){
    int add=l+m;
    cout<<add;
 }

int main(){
int p=40;
int q=35;
addition(p,q);
return 0;
}  */

#include <iostream>
using namespace std; 
int sub(int ,int );
int main(){
   int difference;
   difference = sub(200,100);
   cout<<difference <<endl;
   return 0;
}
 int sub(int x,int y){
   return (x-y);
 }