#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int x[1001], y[1001];
    fill_n(x, 1001, 0);
    fill_n(y, 1001, 0);

    int x0, y0, ans = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> x0 >> y0;
        x[x0]++;
        y[y0]++;
    }

    for (int i = 0; i < 1001; i++)
    {
        if (x[i] == 1)
        {
            x0 = i;
        }
        if (y[i] == 1)
        {
            y0 = i;
        }
    }

    cout << x0 << " " << y0 << "\n";

    return 0;
}
