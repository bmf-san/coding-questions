#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    string num[]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        cout<<((i<=9)?num[i-1]:((i%2)==0?"even":"odd"))<<endl;
}