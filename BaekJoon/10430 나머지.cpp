#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if (A >= 2 && B <= 10000 && C <= 10000) {
        cout << (A + B) % C << endl;
        cout << ((A % C) + (B % C)) % C << endl;
        cout << (A * B) % C << endl;
        cout << ((A % C) * (B % C)) % C << endl;
    }
    return 0;
}
