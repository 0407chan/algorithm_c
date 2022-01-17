#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int a, nums[42], ans = 0;
    fill_n(nums, 42, 0);

    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        nums[a % 42]++;
    }
    for (int i = 0; i < 42; i++)
    {
        if (nums[i] > 0)
        {
            ans++;
        }
    }

    cout << ans;

    return 0;
}
