#include <iostream>
#include "MyLib.h"

using namespace std;
using namespace MyInputNum;

int SumNum(int Num1, int Num2)
{
    int sum = Num1 + Num2;
    return sum;
}

void PrintSumNum(int Num1, int Num2)
{
    cout << "Sum = " << SumNum(Num1, Num2) << endl;
}

int main()
{
    PrintSumNum(IntNum("Enter a number : "), IntNum("Enter a number : "));
}