#include <iostream>
using namespace std;

int main()
{
    int a, ans;
    cin >> a;

    if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))
    {
        ans = 1;
    }
    else
    {
        ans = 0;
    }
    cout << ans << endl;
    return 0;
}
