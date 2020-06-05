#include <bits/stdc++.h>

using namespace std;

int main()
{
    string num[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cin >> n;
    cout << ((n > 9) ? "Greater than 9" : num[n - 1]);
}
