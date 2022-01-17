#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int N;
    cin >> N;
    double a, max = 0, ans = 0;
    double nums[N];
    fill_n(nums, N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> a;
        nums[i] = a;
        if (max < a)
        {
            max = a;
        }
    }

    for (int i = 0; i < N; i++)
    {
        ans += nums[i] / max * 100;
    }

    cout << ans / N;

    return 0;
}
