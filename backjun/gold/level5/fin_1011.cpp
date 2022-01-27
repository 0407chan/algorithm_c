#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

// 0 4 / 1 2 1
// 0 9 / 1 2 3 2 1
// 0 16 / 1 2 3 4 3 2 1
// 0 25 / 1 2 3 4 5 4 3 2 1

/** 풀이
 * 현재 거리의 제곱마다 일정한 규칙이 나왔다.
 * 올림(root(거리차이)) 으로 내 다음의 규칙에 도달한다.
 * ex 올림(root(8)) = 3. 3의 제곱은 9. 고로 1 2 3 2 1 = 3*2-1개 보다 밑에 있다는 뜻.
 * 그 이전의 규칙을 보면 9 (3의 제곱) 을 포함해서 3만큼 아래까지는 갯수가 3*2-1 개로 같았고,
 * 그 이상부터는 2*2-1 층으로 내려갔다.
 * 
 * 고로 내 현재 숫자 = 8 와 규칙 숫자 = 9 의 차이 = 1 가 찾은 숫자 = 3 보다 작으면 찾은 숫자 * 2 - 1,
 * 만약 그 차이가 찾은 숫자보다 크면 찾은 숫자 * 2 - 2 해주면됐다.
 * 규칙 찾는게 어렵네
 */

int main()
{
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int k, point = 0, ans = 0;
        double x, y;

        cin >> x >> y;

        k = max(x, y) - min(x, y);
        point = ceil(sqrt(k));
        if (point * point - k < point)
        {
            cout << point * 2 - 1;
        }
        else
        {
            cout << point * 2 - 2;
        }
        cout << "\n";
    }

    return 0;
}

// 1
// 2
// 3 3
// 4 4
// 5 5 5
// 6 6 6
// 7 7 7 7
// 8 8 8 8
// 9 9 9 9 9
// 10 10 10 10 10

// 0 1 / 1
// 0 2 / 1 1
// 0 3 / 1 1 1
// 0 4 / 1 2 1
// 0 5 / 1 2 1 1
// 0 6 / 1 2 2 1
// 0 7 / 1 2 2 1 1
// 0 8 / 1 2 2 2 1
// 0 9 / 1 2 3 2 1
// 0 10 / 1 2 3 2 1 1
// 0 11 / 1 2 3 2 2 1
// 0 12 / 1 2 3 3 2 1
// 0 13 / 1 2 3 3 2 1 1
// 0 14 / 1 2 3 3 2 2 1
// 0 15 / 1 2 3 3 3 2 1
// 0 16 / 1 2 3 4 3 2 1
// 0 17 / 1 2 3 4 3 2 1 1
// 0 18 / 1 2 3 4 3 2 2 1
// 0 19 / 1 2 3 4 3 3 2 1
// 0 20 / 1 2 3 4 4 3 2 1
// 0 21 / 1 2 3 4 4 3 2 1 1
// 0 22 / 1 2 3 4 4 3 2 2 1
// 0 23 / 1 2 3 4 4 3 3 2 1
// 0 24 / 1 2 3 4 4 4 3 2 1
// 0 25 / 1 2 3 4 5 4 3 2 1
// 0 26 / 1 2 3 4 5 4 3 2 1 1
// 0 27 / 1 2 3 4 5 4 3 2 2 1
// 0 28 / 1 2 3 4 5 4 3 3 2 1
// 0 29 / 1 2 3 4 5 4 4 3 2 1
// 0 30 / 1 2 3 4 5 5 4 3 2 1