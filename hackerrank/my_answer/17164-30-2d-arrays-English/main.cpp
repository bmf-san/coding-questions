// NOTE: Refereced https://www.hackerrank.com/challenges/30-2d-arrays/forum/comments/23964
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // create a 2D array data set.
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++)
    {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // calculate hourgrasses.
    int max = 0;
    int tmp;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            tmp = 0;

            // top
            tmp += arr[i][j];
            tmp += arr[i][j + 1];
            tmp += arr[i][j + 2];

            // middle
            tmp += arr[i + 1][j + 1];

            // bottom
            tmp += arr[i + 2][j];
            tmp += arr[i + 2][j + 1];
            tmp += arr[i + 2][j + 2];

            if (tmp > max || i == 0 && j == 0)
            {
                max = tmp;
            }
        }
    }

    cout << max;

    return 0;
}