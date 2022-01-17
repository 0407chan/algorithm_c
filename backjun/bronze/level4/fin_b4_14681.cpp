#include <iostream>
using namespace std;

int main()
{
    int x, y, ans;
    cin >> x >> y;

    if (x > 0 && y > 0)
    {
        ans = 1;
    }
    else if (x < 0 && y > 0)
    {
        ans = 2;
    }
    else if (x < 0 && y < 0)
    {
        ans = 3;
    }
    else
    {
        ans = 4;
    }
    cout << ans << endl;
    return 0;
}
