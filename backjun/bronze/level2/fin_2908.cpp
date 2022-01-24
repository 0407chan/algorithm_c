#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int a, b, ans;
    string sa, sb, ra, rb;
    cin >> a >> b;
    sa = to_string(a);
    sb = to_string(b);

    reverse(sa.begin(), sa.end());
    reverse(sb.begin(), sb.end());

    cout << max(stoi(sa), stoi(sb));

    return 0;
}
