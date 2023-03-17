#include <iostream>

using namespace std;

void FillMultiTable(int ArrMultiTable[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            ArrMultiTable[i][j] = (i+1) * (j+1);
    }
}

void PrintMultiTable(int ArrMultiTable[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            printf("%0*d ", 2, ArrMultiTable[i][j]);

        cout << endl;
    }
}

int main()
{
    int ArrMultiTable[10][10];

    FillMultiTable(ArrMultiTable);

    PrintMultiTable(ArrMultiTable);

    return 0;
}