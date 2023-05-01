#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    int i = 2;
    while (i <= sqrt(n)) {
        if (n % i == 0) {
            return false;
        }else {
            return true;
        }
        i++;
    }
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (is_prime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
    return 0;
}

/* #include <iostream> 
using namespace std;


bool is_Prime(int number){
    if(number <2){
        return false;
    }
    for(int i=2; i*i<=number;i++){
        if(number%i==0){
            return false;
        }
        return true;
    }
}

 int main() {
    int n;
    cout<<"enter you number"<<endl;
    cin>>n;
    if(is_Prime == 0){
        cout<<n<<" is not prime"<<endl;
    } else {
    cout<<n<<" is Prime"<<endl;
    }
 } */