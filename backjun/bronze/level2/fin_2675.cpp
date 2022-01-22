#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int N, a;
    string s;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> a >> s;
        for (int j = 0; j < s.length(); j++)
        {
            for (int k = 0; k < a; k++)
            {
                cout << s.at(j);
            }
        }
        cout << "\n";
    }

    return 0;
}
