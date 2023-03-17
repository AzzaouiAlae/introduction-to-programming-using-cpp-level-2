#include <iostream>

using namespace std;

void MyFunc()
{
    static int Number = 1;
    cout << "The value of Number is : " << Number << endl;
    Number = 1;
    Number ++ ;
}

int main()
{
    MyFunc();
    MyFunc();
    MyFunc();
}