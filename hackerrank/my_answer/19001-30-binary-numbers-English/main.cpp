// NOTE: Here is a my wrong solution.
// This solution can't solve all test cases.
// #include <bits/stdc++.h>

// using namespace std;

// int binary(int n)
// {
//     int ans = 0;
//     for (int i = 0; n > 0; i++)
//     {
//         ans = ans + (n % 2) * pow(10, i);
//         n = n / 2;
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');

//     string bin;
//     bin = to_string(binary(n));

//     int cnt;
//     cnt = 0;
//     for (int i = 0; i < bin.length(); i++)
//     {
//         string b;
//         b = bin[i];
//         if (b == "1")
//         {
//             cnt++;
//         }
//         else
//         {
//             break;
//         }
//     }

//     cout << cnt << endl;

//     return 0;
// }

// NOTE: Referenced https://www.programmingwithbasics.com/2017/04/hacker-rank-solution-program-in-c-for_97.html
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int count;
    int max;

    cin >> n;
    count = 0;
    max = 0;

    while(n)
    {
        if (n&1) {
            count++;
        } else {
            count = 0;
        }
        if (max < count) {
            max = count;
        }
        // n/2
        n >>= 1;
    }

    cout << max;

    return 0;
}
