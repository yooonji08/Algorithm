#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    // 1사분면(x,y), 2사분면(-x,y), 3사분면(-x,-y), 4사분면(x,-y)
    cout << (x * y > 0 ? (x > 0 ? 1 : 3) : (x > 0 ? 4 : 2));

    return 0;
}
