#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    vector<int> prime(1000001, 1);

    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i <= 1000000; i++)
    {
        for (int j = 1; j <= 1000000 / i; j++)
        {
            if (i == i * j || prime[i * j] == 0 || i * j > 1000000)
                continue;
            prime[i * j] = 0;
        }
    }

    int N, M, ans = 0, minNum = 1000001;
    cin >> M >> N;

    for (int i = M; i <= N; i++)
    {
        if (prime[i] == 1)
        {
            cout << i << "\n";
        }
    }

    return 0;
}
