#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 1; i <= 10; i++) {
        int result;
        string str;
        str += to_string(n);
        str += " x ";
        str += to_string(i);
        str += " = ";
        str += to_string(n * i);
        cout << str << endl;
    }
}