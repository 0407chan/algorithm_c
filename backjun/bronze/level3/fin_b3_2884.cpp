#include <iostream>
using namespace std;

int main()
{
    int hour, min, ans;
    cin >> hour >> min;

    if (min < 45)
    {
        min = 60 + min - 45;
        hour -= 1;
    }
    else
    {
        min = min - 45;
    }

    if (hour < 0)
    {
        hour = 23;
    }
    cout << hour << " " << min << endl;
    return 0;
}
