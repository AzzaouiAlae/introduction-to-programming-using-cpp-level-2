#include <iostream>

using namespace std;

int main()
{
    void* ptr;

    int x = 50;

    float f1 = 10.50;

    ptr = &f1;

    cout << "f1 : " << *(static_cast<float*>(ptr)) << endl;

    ptr = &x;

    cout << "x : " << *(static_cast<int*>(ptr)) << endl;
}