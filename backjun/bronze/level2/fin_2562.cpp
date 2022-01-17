#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int a, b, c, res, nums[10];
    fill_n(nums, 10, 0);

    cin >> a >> b >> c;
    res = a * b * c;
    while (true)
    {
        nums[res % 10]++;
        res /= 10;
        if (res == 0)
            break;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << nums[i] << "\n";
    }

    return 0;
}
