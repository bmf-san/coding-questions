#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b, c;

    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    c = a + b;
    cout << c << endl;
    char tmp;
    tmp = b[0];
    b[0] = a[0];
    a[0] = tmp;
    cout << a << " " << b;
}
