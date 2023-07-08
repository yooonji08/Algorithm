#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string id;
    cin >> id;
    bool isUpper = false;
    for (int i = 0; i < id.length(); ++i) {
        if (!islower(id[i])) {
            isUpper = true;
        }
    }
    if (!isUpper && id.length() <= 50) {
        cout << id + "??!" << endl;
    }
    return 0;
}
