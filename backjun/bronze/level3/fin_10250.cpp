#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int T, H, W, N, ans = 100;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        ans = 100;
        cin >> H >> W >> N;

        ans *= N % H == 0 ? H : N % H;
        ans += (int)ceil(N / (double)H);
        cout << ans << "\n";
    }

    return 0;
}
