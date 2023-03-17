#include <iostream>

using namespace std;

int main()
{
    int* intPtr = new int(10);
    float* floatPtr = new float(50.68);

    cout << "int : " << *intPtr << endl;
    cout << "float : " << *floatPtr << endl;

    delete intPtr;
    delete floatPtr;    
}