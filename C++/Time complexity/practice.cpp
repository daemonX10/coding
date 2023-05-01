// #include <iostream>
// using namespace std;
// int sum_in_range(int x, int y){
// int result=0;
// for(int i=x;i<=y;i++){
//    result+=i;
// }
// }
// int main(){
// cout<<sum_in_range(2,6);
//    return 0;
// }

#include <iostream>
using namespace std;
int sum_in_range(int x, int y){
int a =x;
int n=(y-x+1);
int result=n*(a*2+(n-1))/2;
return result;
}
int main(){
   cout<<sum_in_range(1,10);
}