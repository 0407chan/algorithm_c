#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int N, ans = 0;
    cin >> N;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        ans += s.at(i) - '0';
    }

    cout << ans;
    return 0;
}
