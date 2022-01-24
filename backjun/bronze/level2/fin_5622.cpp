#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int getTime(char a)
{
    switch (a)
    {
    case 'A':
    case 'B':
    case 'C':
        return 3;
    case 'D':
    case 'E':
    case 'F':
        return 4;
    case 'G':
    case 'H':
    case 'I':
        return 5;
    case 'J':
    case 'K':
    case 'L':
        return 6;
    case 'M':
    case 'N':
    case 'O':
        return 7;
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
        return 8;
    case 'T':
    case 'U':
    case 'V':
        return 9;
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
        return 10;
    default:
        return 0;
    }
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    string s;
    int ans = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        ans += getTime(s.at(i));
    }
    cout << ans;
    return 0;
}
