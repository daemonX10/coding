#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotateArray(vector<vector<int>>&matrix){
    int n=matrix.size();
    // swap the elements symmetrically across the diagonal
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // reverse the rows of the matrix
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
int main() {
int n;
cin>>n;
vector<vector<int>>matrix(n,vector<int>(n));
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>matrix[i][j]; // input from user
    }
}
cout<<"Original vector:"<<endl; // print original matrix
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl<<"Rotated matrix:"<<endl;
rotateArray(matrix);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<matrix[i][j]<<" "; // print rotated matrix
    }
    cout<<endl;
}
    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// void rotateArray(vector<vector<int>>&matrix){
//     int n=matrix.size();
//     vector<vector<int>>temp_vec=matrix;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         matrix[i][j]=temp_vec[j][i];//change the place of the diagonally opposite term
//     }
// }

// for(int i=0;i<n;i++){
//     reverse(matrix[i].begin(),matrix[i].end()); // rotate the matrix element like (1,2,3)--(3,2,1)
// }
// }
// int main() {
// int n;
// cin>>n;
// vector<vector<int>>matrix(n,vector<int>(n));
// for(int i=0;i<n;i++){
//     for(int j=0;j<matrix[i].size();j++){
//         cin>>matrix[i][j]; // input from user
//     }
// }
// cout<<"Original vector:"<<endl; // print original matrix
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<matrix[i][j]<<" ";
//     }
//     cout<<endl;
// }
// cout<<endl<<"Rotated matrix:"<<endl;
// rotateArray(matrix);
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<matrix[i][j]<<" "; // print rotated matrix
//     }
//     cout<<endl;
// }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void rotate_matrix(int matrix[][3], int n) {
//     for(int layer=0; layer<n/2; layer++) {
//         int first = layer;
//         int last = n-1-layer;
//         for(int i=first; i<last; i++) {
//             int offset = i-first;
//             int top = matrix[first][i];
//             matrix[first][i] = matrix[last-offset][first];
//             matrix[last-offset][first] = matrix[last][last-offset];
//             matrix[last][last-offset] = matrix[i][last];
//             matrix[i][last] = top;
//         }
//     }
// }

// int main() {
//     int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
//     rotate_matrix(matrix, 3);
//     for(int i=0; i<3; i++) {
//         for(int j=0; j<3; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
