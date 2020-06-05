#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int j;
    double e;
    string t;

    cin >> j;
    cin >> e;

    printf("%d\n", i + j);
    printf("%.1lf\n", d + e);
    cin.ignore();
    getline(cin, t);
    cout << s + t << endl;

    return 0;
}