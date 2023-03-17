#include <iostream>

using namespace std;

int main()
{
    int ArrNum[] = { 10, 20, 30, 40, 50};
    int* pointer = ArrNum;

    for (int i = 0; i < 5; i++)
    {
        cout << *(pointer + i) << endl;
    }

}