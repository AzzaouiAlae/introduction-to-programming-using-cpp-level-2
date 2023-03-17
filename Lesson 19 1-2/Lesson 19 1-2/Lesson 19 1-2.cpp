#include <iostream>

using namespace std;

void PrintNumbers(int N, int M)
{
    if (N <= M)
    {
        cout << M << endl;
        PrintNumbers(N, M - 1);
    }
}

int main()
{
    PrintNumbers(3, 10);
}
