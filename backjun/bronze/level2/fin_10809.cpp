#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int ans[26];
    fill_n(ans, 26, -1);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (ans[s.at(i) - '0' - 49] == -1)
        {
            ans[s.at(i) - '0' - 49] = i;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
