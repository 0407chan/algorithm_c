#include <iostream>
// #include <cctype>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    string s;
    int ans[26], max = 0, same = 0, index = -1;
    fill_n(ans, 26, 0);

    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        ans[tolower(s.at(i)) - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (max < ans[i])
        {
            max = ans[i];
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (max == ans[i])
        {
            same++;
            if (index == -1)
            {
                index = i;
            }
        }
    }

    if (same == 1)
    {
        cout << (char)(index + 65);
    }
    else
    {
        cout << '?';
    }
    return 0;
}
