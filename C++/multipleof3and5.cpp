#include <iostream>
using namespace std;
int main() {
    int numb;
    cout<<"enter number"<<endl;
    cin>>numb;
    if(numb%3==0)
    {
      if(numb%5==0)
      {
        cout<<"FizzBuzz";
      }else{
        cout<<"Fizz";
      }
    }
      if(numb%5==0 & numb%3==1){
        cout<<"Buzz";
      }
    }