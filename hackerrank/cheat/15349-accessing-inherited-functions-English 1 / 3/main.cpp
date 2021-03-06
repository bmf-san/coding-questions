#include<iostream>

using namespace std;

class A
{
    public:
        A() {
            callA = 0;
        }
    private:
        int callA;
        void inc() {
            callA++;
        }
    protected:
        void func(int & a)
        {
            a = a * 2;
            inc();
        }
    public:
        int getA() {
            return callA;
        }
};

class B
{
    public:
        B() {
            callB = 0;
        }
    private:
        int callB;
        void inc(){
            callB++;
        }
    protected:
        void func(int & a)
        {
            a = a * 3;
            inc();
        }
    public:
        int getB() {
            return callB;
        }
};

class C
{
    public:
        C() {
            callC = 0;
        }
    private:   
        int callC;
        void inc() {
            callC++;
        }
    protected:
        void func(int & a)
        {
            a = a*5;
            inc();
        }
    public:
        int getC() {
            return callC;
        }
};

class D: public A, B, C
{
    int val;
    public:
        D()
        {
            val=1;
        }
    void update_val(int new_val)
    {
        int co[3] = {0, 0, 0};
        while((new_val & 1) == 0) {
            co[0] += 1;
            new_val >> 1;
        }
        while ((new_val % 3) == 0) {
            co[1] += 1;
            new_val /= 3;
        }
        while ((new_val % 5) == 0) {
            co[2] += 1;
            new_val /= 5;
        }

        for (int i=0; i < co[0]; i += 1) A::func(val);
        for (int i=0; i < co[1]; i += 1) B::func(val);
        for (int i=0; i < co[2]; i += 1) C::func(val);
    }

    void check(int);
};

void D::check(int new_val)
{
    update_val(new_val);
    cout << "Value = " << val << endl << "A's func called " << getA() << " times " << endl << "B's func called " << getB() << " times" << endl << "C's func called " << getC() << " times" << endl;
}

int main()
{
    D d;
    int new_val;
    cin >> new_val;
    d.check(new_val);
}
