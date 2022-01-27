#include <iostream>
#include <cmath>
#include <set>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int prime[1001];
    fill_n(prime, 1001, 1);
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000 / i; j++)
        {
            if (i == i * j || prime[i * j] == 0 || i * j > 1000)
                continue;

            prime[i * j] = 0;
        }
    }

    int N = 0, ans = 0, num;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        ans += prime[num];
    }
    cout << ans << "\n";

    return 0;
}
