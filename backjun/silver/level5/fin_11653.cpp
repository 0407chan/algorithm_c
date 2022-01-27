#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int N, index = 2, ans = 0;
    cin >> N;

    while (true)
    {
        if (N <= 1 || index > N)
        {
            break;
        }
        if (N % index == 0)
        {
            N /= index;
            cout << index << "\n";
            index = 2;
        }
        else
        {
            index++;
        }
    }

    return 0;
}
