#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

string sum(string a, string b)
{
    vector<string> ans;
    int n = max(a.length(), b.length());
    int next = 0;

    for (int i = 1; i <= n; i++)
    {
        int ai = a.length() - i;
        int bi = b.length() - i;
        int inta = ai < 0 ? 0 : (int)(a.at(ai) - 48);
        int intb = bi < 0 ? 0 : (int)(b.at(bi) - 48);
        ans.push_back(to_string((next + inta + intb) % 10));
        next = (next + inta + intb) / 10;
    }
    if (next > 0)
    {
        ans.push_back(to_string(next));
    }
    string result;
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        result += ans.at(i);
    }
    return result;
}
int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    string a, b;
    cin >> a >> b;

    cout << sum(a, b);

    return 0;
}
