#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

#define MAX_NUM = 10000

vector<int> getPrimeList(int maxNumber)
{
    vector<int> result(maxNumber, 1);

    result[0] = 0;
    result[1] = 0;
    for (int i = 2; i <= maxNumber - 1; i++)
    {
        for (int j = 1; j <= maxNumber - 1 / i; j++)
        {
            if (i == i * j || result[i * j] == 0 || i * j > maxNumber - 1)
                continue;
            result[i * j] = 0;
        }
    }
    return result;
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    vector<int> prime(10001, 1);

    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i <= 10000; i++)
    {
        for (int j = 1; j <= 10000 / i; j++)
        {
            if (i == i * j || prime[i * j] == 0 || i * j > 10001 - 1)
                continue;
            prime[i * j] = 0;
        }
    }

    int T = 0;
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        int N, ansA = 0, ansB = 0, minNum = 10001;
        vector<int> tempPrime;

        cin >> N;
        if (N == 0)
            break;

        for (int i = 0; i <= N; i++)
        {
            if (prime[i] == 1)
            {
                tempPrime.push_back(i);
            }
        }
        for (int i = 0; i < tempPrime.size(); i++)
        {
            for (int j = 0; j < tempPrime.size(); j++)
            {
                // cout << tempPrime[i] << " " << tempPrime[j] << " = " << tempPrime[i] + tempPrime[j] << "\n";

                if (tempPrime[i] + tempPrime[j] == N)
                {
                    if ((ansA == 0 && ansB == 0) || abs(ansA - ansB) > abs(tempPrime[i] - tempPrime[j]))
                    {
                        ansA = tempPrime[i];
                        ansB = tempPrime[j];
                    }
                }
            }
        }
        cout << min(ansA, ansB) << " " << max(ansA, ansB) << "\n";
    }

    return 0;
}
