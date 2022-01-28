#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    vector<int> prime(300001, 1);

    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i <= 300000; i++)
    {
        for (int j = 1; j <= 300000 / i; j++)
        {
            if (i == i * j || prime[i * j] == 0 || i * j > 300000)
                continue;
            prime[i * j] = 0;
        }
    }

    while (true)
    {
        int N, ans = 0, minNum = 300001;
        cin >> N;
        if (N == 0)
            break;

        for (int i = N + 1; i <= N * 2; i++)
        {
            if (prime[i] == 1)
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
