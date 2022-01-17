#include <iostream>
using namespace std;

int main()
{
    int N, X, num;
    cin >> N >> X;
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        if (num < X)
        {
            cout << num << " ";
        }
    }
    return 0;
}
