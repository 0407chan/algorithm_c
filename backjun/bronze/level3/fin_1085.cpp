#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int x, y, w, h, ans = 0;
    cin >> x >> y >> w >> h;

    cout << min(min(abs(x - w), abs(y - h)), min(abs(x - 0), abs(y - 0)));

    return 0;
}
