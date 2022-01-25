#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int a, n = 0, i = 1, j = 1, res = 0;
    cin >> a;

    while (true)
    {
        if (a > n * (n + 1) / 2)
        {
            n++;
        }
        else
        {
            break;
        }
    }
    res = n * (n + 1) / 2 - a;

    if (n % 2 == 0)
    {
        i = n;
        j = 1;
        cout << i - res << "/" << j + res << "\n";
    }
    else
    {
        i = 1;
        j = n;
        cout << i + res << "/" << j - res << "\n";
    }

    return 0;
}
