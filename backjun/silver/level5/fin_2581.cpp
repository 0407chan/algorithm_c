#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int prime[10001];
    fill_n(prime, 10001, 1);
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i <= 10000; i++)
    {
        for (int j = 1; j <= 10000 / i; j++)
        {
            if (i == i * j || prime[i * j] == 0 || i * j > 10000)
                continue;

            prime[i * j] = 0;
        }
    }

    int N, M, ans = 0, minNum = 10001;
    cin >> N >> M;

    for (int i = N; i <= M; i++)
    {

        if (prime[i] == 1)
        {
            minNum = min(minNum, i);
            ans += i;
        }
    }

    if (ans == 0 && minNum == 10001)
    {
        cout << -1;
    }
    else
    {
        cout << ans << "\n"
             << minNum;
    }

    return 0;
}
