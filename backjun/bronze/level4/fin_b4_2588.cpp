#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int current;
    int c = b;

    for (int i = 0; i < 3; i++)
    {
        current = b % 10;
        b /= 10;
        cout << a * current << endl;
    }

    cout << a * c << endl;
    return 0;
}
