#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int n, num;
    cin >> n;
    int max = -1000001;
    int min = 1000001;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (max < num)
        {
            max = num;
        }
        if (min > num)
        {
            min = num;
        }
    }

    cout << min << " " << max << "\n";

    return 0;
}
