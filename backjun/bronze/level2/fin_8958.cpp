#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int N;
    string s;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        int ans = 0, score = 1;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'O')
            {
                ans += score;
                score++;
            }
            else
            {
                ans += 0;
                score = 1;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
