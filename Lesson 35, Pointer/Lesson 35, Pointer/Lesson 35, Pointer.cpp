#include <iostream>

using namespace std;

int main()
{
    int a = 10;

    int* p = &a;

    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;

    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;

    *p = 30;

    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
}