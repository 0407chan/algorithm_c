#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int T, k, n, map[15][15] = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}};
    for (int i = 1; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (j == 0)
            {
                map[i][j] = 0;
            }
            else
            {
                map[i][j] = map[i - 1][j] + map[i][j - 1];
            }
        }
    }

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> k;
        cin >> n;

        cout << map[k][n] << "\n";
    }
    return 0;
}

//4층 1 6 21 51 106....
//3층 1 5 15 30 65....
//2층 1 4 10 20 35....
//1층 1 3 6  10 15....
//0층 1 2 3  4  5 6 7 8 9 10 11 12 13 14