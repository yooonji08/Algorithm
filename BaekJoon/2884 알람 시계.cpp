#include <iostream>
using namespace std;

int main()
{
    // 입력시간보다 45분전의 시간 출력
    int H, M;
    cin >> H >> M;

    M = (H * 60 + M - 45 + 60 * 24) % (60 * 24);
    cout << M / 60 << " " << M % 60;
}