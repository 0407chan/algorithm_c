#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int num, index;
    int max = -1;

    for (int i = 0; i < 9; i++)
    {
        cin >> num;
        if (max < num)
        {
            max = num;
            index = i;
        }
    }

    cout << max << "\n"
         << index + 1 << "\n";

    return 0;
}
