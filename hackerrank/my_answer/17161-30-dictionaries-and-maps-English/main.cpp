#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n;
    string name;
    int number;
    cin >> n;
    cin.ignore();
    map<string, int> pBook;

    for (int i = 0; i < n; i++)
    {
        cin >> name;
        cin >> number;
        pBook[name] = number;
    }

    while (cin >> name)
    {
        if (pBook.count(name) != 0)
        {
            cout << name << "=" << pBook.find(name)->second << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }

    return 0;
}