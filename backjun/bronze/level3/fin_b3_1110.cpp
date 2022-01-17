#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int N, temp, ans = 0, a, b, nextNum;
    cin >> N;
    temp = N;
    nextNum = N;

    while (true)
    {
        a = nextNum / 10;
        b = nextNum % 10;
        nextNum = (b)*10 + (a + b) % 10;
        ans++;
        if (nextNum == N)
        {
            break;
        }
    }
    cout << ans << "\n";

    return 0;
}
