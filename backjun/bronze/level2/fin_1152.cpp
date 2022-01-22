#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<string> split(const string s, char delim)
{
    vector<string> result;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim))
    {
        result.push_back(item);
    }
    return result;
}

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    string s;
    getline(cin, s);
    int ans = 0;

    vector<string> stringList = split(s, ' ');

    for (int i = 0; i < stringList.size(); i++)
    {
        if (stringList[i] != "")
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
