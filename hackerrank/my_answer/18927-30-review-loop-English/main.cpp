#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void output(string s) {
    for (int i = 0; i < s.length(); i ++) {
        if (i%2 == 0) {
            cout << s[i];
        }
    }

    cout << " ";

    for (int i = 0; i < s.length(); i++) {
        if (i%2 != 0) {
            cout << s[i];
        }
    }

    cout << endl;
}

int main() {
    int n;
    cin >> n;

    for (int i=0; i < n; i++){
        string s;
        cin >> s;
        output(s);
    }

    return 0;
}