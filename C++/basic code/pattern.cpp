#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    int n = ch - 'a' + 1;
    int i, j, k;

    // Printing the upper half of the structure
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n-i; j++) {
            cout << " ";
        }
        for (k = 1; k <= i; k++) {
            cout << (char)('a' + k - 1);
        }
        cout << endl;
    }

    // Printing the lower half of the structure
    for (i = n-1; i >= 1; i--) {
        for (j = 1; j <= n-i; j++) {
            cout << " ";
        }
        for (k = 1; k <= i; k++) {
            cout << (char)('a' + k - 1);
        }
        cout << endl;
    }

    return 0;
}
