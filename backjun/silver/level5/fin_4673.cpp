#include <iostream>
#include <cmath>
using namespace std;

int d(int n)
{
    int newNum = n;
    int res = n;
    while (true)
    {
        res += newNum % 10;
        newNum /= 10;
        if (newNum == 0)
            break;
    }
    return res;
}

// 셀프 넘버
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int max = 10001;
    int ans[max];
    fill_n(ans, max, 0);

    for (int i = 0; i < max; i++)
    {
        if (d(i) <= max)
        {
            ans[d(i)]++;
        }
    }
    for (int i = 0; i < max; i++)
    {
        if (ans[i] == 0)
        {
            cout << i << "\n";
        }
    }

    return 0;
}
