#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if (1 <= A && B <= 10000) {
        cout << A+B << endl;
        cout << A-B << endl;
        cout << A*B << endl;
        cout << A/B << endl;
        cout << A%B << endl;
    }
    return 0;
}
