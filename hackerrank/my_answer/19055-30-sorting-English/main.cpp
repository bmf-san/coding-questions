#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int a_i = 0; a_i < n; a_i++)
    {
        cin >> a[a_i];
    }

    int swapT = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a.size() - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swapT++;
            }
        }

        if (swapT == 0)
        {
            break;
        }
    }

    cout << "Array is sorted in " << swapT << " swaps." << endl;
    cout << "First Element: " << a.front() << endl;
    cout << "Last Element: " << a.back() << endl;
    return 0;
}
