#include <iostream>

using namespace std;

int main()
{
    int Page = 1, TotalPages = 10;

    printf("The Page Number = %d\n", Page);
    printf("You Are in page %d of %d\n", Page, TotalPages);

    printf("The Page Number = %0*d\n", 2, Page);
    printf("The Page Number = %0*d\n", 3, Page);
    printf("The Page Number = %0*d\n", 4, Page);

    int Num1 = 20, Num2 = 30;
    printf("Result of %d + %d = %d\n", Num1, Num2, Num1 + Num2);
}