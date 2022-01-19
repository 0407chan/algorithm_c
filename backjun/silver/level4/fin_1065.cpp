#include <iostream>
#include <cmath>
using namespace std;

bool isHan(int n)
{
    if (n < 100)
        return true;
    if (n == 1000)
    {
        return false;
    }

    int newNum = n;
    int a = newNum % 10;
    int b = newNum % 100 / 10;
    int c = newNum % 1000 / 100;

    if (a - b == b - c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int N = 0, ans = 0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (isHan(i))
        {
            ans++;
        }
    }
    cout << ans;

    return 0;
}
