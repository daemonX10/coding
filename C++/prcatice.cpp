//  #include <iostream>
//  using namespace std;
// int main() {
//     int n=5;
//     // loop to print the lower triangle
//     for (int line=n+1; line<(2*n-1);line++){
//         int no_of_space =line-n;
//         for(int k=0;k<no_of_space;k++){
//             cout<<" ";
//         }
//         // loop to print lower triangle
//         for(int no_of_chars=2*(2*n-line)-1;no_of_chars<9;
//             line++){
//             int no_of_space=(line-n);
//             for (int k=0;k<no_of_space;k++){
//                 cout<<" ";
//             }
//         }

//     }
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// void rotateMatrix(vector<vector<int>>& matrix) {
//     int n = matrix.size();
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         reverse(matrix[i].begin(), matrix[i].end());
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<vector<int>>matrix(n, vector<int>(n));
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//     cout << "Original Matrix:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     rotateMatrix(matrix);
//     cout << "Rotated Matrix:\n";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const double TAX_RATE = 0.07; // 7% tax rate
    const double TIP_RATE = 0.15; // 15% tip rate

    string name;
    double subtotal, tax, tip, total;

    // Get the customer's name
    cout << "Enter customer's name: ";
    getline(cin, name);

    // Get the subtotal
    cout << "Enter subtotal: $";
    cin >> subtotal;

    // Calculate tax, tip, and total
    tax = subtotal * TAX_RATE;
    tip = subtotal * TIP_RATE;
    total = subtotal + tax + tip;

    // Display the bill
    cout << fixed << setprecision(2);
    cout << "\nBill for " << name << ":" << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total: $" << total << endl;

    return 0;
}

