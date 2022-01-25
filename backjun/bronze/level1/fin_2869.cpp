#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    double a, b, v;
    cin >> a >> b >> v;

    cout << (int)ceil((v - a) / (a - b)) + 1 << endl;

    return 0;
}
