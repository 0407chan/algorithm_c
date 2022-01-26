#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int N = 0, ans = 10000, index = 0, temp = 0;
    cin >> N;

    temp = N;
    while (true)
    {
        int res = temp - (5 * index);
        if (res >= 0)
        {
            if (res % 3 == 0)
            {
                ans = min(ans, (index + (res / 3)));
            }

            index++;
            temp = N;
        }
        else
        {
            break;
        }
    }

    if (ans == 10000)
    {
        cout << -1;
    }
    else
    {
        cout << ans;
    }

    return 0;
}
