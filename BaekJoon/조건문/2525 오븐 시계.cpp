#include <iostream>
using namespace std;

int main() {
    // 방법 1.
    int h, m, t;
    cin >> h >> m >> t;
    if (m + t >= 60) {
        h += (m + t) / 60;
        if (h >= 24) {
            h -= 24;
        }
    }
    cout << h << " " << (m + t) % 60 << endl;
    
    // 방법 2.
    int H, M, T;
    cin >> H >> M >> T;
    H += T / 60;
    M += T % 60;
    if (M >= 60) {
        H += 1;
        M -= 60;
    }
    if (H >= 24) {
        H -= 24;
    }
    cout << H << " " << M << endl;
    return 0;
}
