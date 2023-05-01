#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "damodar";

    // define heart shape
    string heart[] = {
        "  *   *  ",
        " *** *** ",
        "********",
        "*******",
        " ***** ",
        "  ***  ",
        "   *   "
    };

    // print heart with name
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < heart[i].size(); j++) {
            if (heart[i][j] == '*') {
                cout << name;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
