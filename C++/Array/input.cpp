/* #include <iostream>

using namespace std;

int main() {
  int arr[5];

  cout << "Enter 5 numbers:\n";

  for(int i = 0; i < 5; i++) {
    cin >> arr[i];
  }

  cout << "The array is: ";
  
  for(int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  
  return 0;
}
 */
#include <iostream>

using namespace std;

int main() {
  int arr[5];
  int i = 0;

  cout << "Enter 5 numbers:\n";

  while(i < 5) {
    cin >> arr[i];
    i++;
  }

  cout << "The array is: ";
  
  i = 0;
  
  while(i < 5) {
    cout << arr[i] << " ";
    i++;
  }
  
  return 0;
}
