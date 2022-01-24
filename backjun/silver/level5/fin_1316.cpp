#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int N, alpha[26], ans = 0;
    cin >> N;
    string s;

    for (int i = 0; i < N; i++)
    {
        cin >> s;
        fill_n(alpha, 26, 0);
        bool isSame = false;
        ans++;
        for (int j = 0; j < s.length(); j++)
        {
            if (j == 0)
            {
                alpha[(int)s.at(j) - 97]++;
            }

            if (j > 0)
            {
                if (s.at(j) != s.at(j - 1) && alpha[(int)s.at(j) - 97] > 0)
                {
                    ans--;
                    break;
                }
                alpha[(int)s.at(j) - 97]++;
            }
        }
    }
    cout << ans << "\n";

    return 0;
}
