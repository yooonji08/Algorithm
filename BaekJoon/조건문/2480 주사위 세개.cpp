#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    if (num1 == num2 && num2 == num3) {
        cout << 10000 + num1 * 1000 << endl;
    }
    else if (num1 == num2 || num1 == num3) {
        cout << 1000 + num1 * 100 << endl;
    }
    else if (num2 == num3) {
        cout << 1000 + num2 * 100 << endl;
    }
    else {
        cout << max(max(num1, num2), num3) * 100 << endl;
    }
    return 0;
}
