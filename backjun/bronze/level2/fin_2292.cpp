#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int a, i = 0;
    cin >> a;

    while (true)
    {
        if (a <= 6 * (i * (i + 1)) / 2 + 1)
        {
            break;
        }
        else
        {
            i++;
        }
    }

    cout << i + 1 << "\n";

    return 0;
}
