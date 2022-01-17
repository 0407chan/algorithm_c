#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    for (int i = n; i > 0; i--)
    {
        cout << i << "\n";
    }

    return 0;
}
