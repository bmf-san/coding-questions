#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference
{
private:
    vector<int> elements;

public:
    int maximumDifference;
    Difference(vector<int> a)
    {
        this->maximumDifference = 0;
        this->elements = a;
    }

    // Add your code here
    void computeDifference()
    {
        int max;
        int min;

        for (int i = 0; i < this->elements.size(); i++)
        {
            if (i == 0)
            {
                max = this->elements[i];
                min = this->elements[i];
                continue;
            }

            if (max < this->elements[i])
            {
                max = this->elements[i];
                continue;
            }

            if (min > this->elements[i])
            {
                min = this->elements[i];
                continue;
            }
        }

        this->maximumDifference = abs(max - min);
    }
};

int main()
{
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}