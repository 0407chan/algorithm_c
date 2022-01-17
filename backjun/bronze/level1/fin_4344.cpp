#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int N;
    cin >> N;
    double ans[N];
    fill_n(ans, N, 0);

    for (int i = 0; i < N; i++)
    {
        int n;
        double over = 0, average = 0.0;
        cin >> n;
        int nums[n];
        fill_n(nums, n, 0);

        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            nums[j] = num;
            average += num;
        }
        for (int j = 0; j < n; j++)
        {
            if (nums[j] > average / n)
            {
                over++;
            }
        }
        ans[i] = over / (double)n * 100;
    }

    cout << fixed;
    cout.precision(3);
    for (int i = 0; i < N; i++)
    {
        cout << round(ans[i] * 1000) / 1000 << "%"
             << "\n";
    }

    return 0;
}
