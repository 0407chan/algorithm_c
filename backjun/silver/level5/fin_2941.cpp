#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int getAlpha(string ts)
{
    if (ts == "c=" || ts == "c-" || ts == "d-" || ts == "lj" || ts == "nj" || ts == "s=" || ts == "z=")
    {
        return 1;
    }
    if (ts == "dz=")
    {
        return 2;
    }
    return 0;
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    string s;
    cin >> s;
    int visit[s.length()];
    fill_n(visit, s.length(), 0);
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (visit[i] > 0 || s.substr(i, 3).length() < 3)
        {
            continue;
        }

        ans += getAlpha(s.substr(i, 3));
        if (getAlpha(s.substr(i, 3)) > 0)
        {
            visit[i]++;
            visit[i + 1]++;
            visit[i + 2]++;
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (visit[i] > 0 || s.substr(i, 2).length() < 2)
        {
            continue;
        }
        ans += getAlpha(s.substr(i, 2));
        if (getAlpha(s.substr(i, 2)) > 0)
        {
            visit[i]++;
            visit[i + 1]++;
        }
    }
    cout << s.length() - ans;

    return 0;
}
