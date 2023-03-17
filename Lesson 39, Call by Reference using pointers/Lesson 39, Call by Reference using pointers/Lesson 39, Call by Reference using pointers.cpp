#include <iostream>

using namespace std;

void swap(int* N1, int* N2)
{
    int temp = *N1;
    *N1 = *N2;
    *N2 = temp;
}

int main()
{
    int A = 10, B = 20;

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    cout << "______________" << endl;

    swap(&A, &B);

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
}