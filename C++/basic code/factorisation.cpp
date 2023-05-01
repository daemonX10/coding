/* #include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, factor;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorization of " << number << ": ";
    
    for(factor = 2; factor <= sqrt(number); factor++) {
        while(number % factor == 0) {
            cout << factor << " ";
            number /= factor;
        }
    }
    
    if(number > 1) {
        cout << number;
    }
    
    return 0;
} */

  #include <iostream>
using namespace std;

int main(){
    int n;
    int fac;
     cout<<"enter your number : ";
     cin>>n;
    for( fac=2; fac*fac<=n;fac++){
        while( n%fac==0){
        cout<<fac<<" ";
        n/=fac;
        }
    }
   
    
} 