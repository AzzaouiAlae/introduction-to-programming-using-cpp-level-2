#include <iostream>

using namespace std;

//int Power(int Num, int Pow, int Result = 0)
//{
//    if (Pow == 0 && Result == 0)
//        Result = 1;
//    else if (Pow == 1 && Result == 0)
//        Result = Num;
//    else if (Result == 0)
//        Result = Num;
//
//    if (Pow > 1)
//    {
//        Result *= Num;
//        Result = Power(Num, Pow - 1, Result);
//    }        
//    return Result;
//}

int Power(int Num, int Pow)
{
    int Result = Num;
    if (Pow == 0)
        return 1;
    else if (Pow > 1)
        Result *= Power(Num, Pow - 1);

    return Result;    
}

int main()
{
    
    
    cout << "Result : " << Power(5, 3) << endl;
}