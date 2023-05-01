/* #include <iostream>
using namespace std;

int main() {
    int arr[5];

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
 */

/* #include<iostream>
using namespace std;
int main() {
    int arr[5];
    int i = 0;

    while(i < 5) {
        cin>> arr[i];
        i++;
    }

    cout<< "Array elements are: ";
    i = 0;
    while(i < 5) {
        cout << arr[i] << " ";
        i++;
    }

    return 0;
} */
/* #include <iostream>
using namespace std;

int main() {
    int arr[5];
    int i = 0;

    do {
        cin >> arr[i];
        i++;
    } while(i < 5);

    cout << "Array elements are: ";
    i = 0;
    do {
        cout << arr[i] << " ";
        i++;
    } while(i < 5);

    return 0;
} */
// for each loop 
#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for(int &x : arr) {
        cin >> x;
    }

    cout << "Array elements are: ";
    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}


