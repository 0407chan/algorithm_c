#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << a + b << "\n";
    }

    return 0;
}
