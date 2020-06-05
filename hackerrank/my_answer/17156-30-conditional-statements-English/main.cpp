#include <bits/stdc++.h>

using namespace std;

bool isEven(int i)
{
    return (i % 2 == 0);
}

bool isRangeLowToHigh(int i, int l, int h)
{
    return (l <= i && i <= h);
}

bool isGreaterThanNum(int i, int n)
{
    return (n < i);
}

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (isEven(N))
    {
        if (isRangeLowToHigh(N, 2, 5))
        {
            cout << "Not Weird" << endl;
            return 0;
        }
        if (isRangeLowToHigh(N, 6, 20))
        {
            cout << "Weird" << endl;
            return 0;
        }
        if (isGreaterThanNum(N, 20))
        {
            cout << "Not Weird" << endl;
            return 0;
        }
    }

    // If N is odd
    cout << "Weird" << endl;
}
