#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    while (true)
    {
        cin >> A >> B;
        if (cin.eof())
            break;

        cout << A + B << "\n";
    }

    return 0;
}
