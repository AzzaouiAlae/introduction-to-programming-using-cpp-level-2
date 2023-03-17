#include <iostream>

using namespace std;

int main()
{
    float PI = 3.14159265359;
    
    printf("PI = %.*f\n", 2, PI);
    printf("PI = %.*f\n", 3, PI);
    printf("PI = %.*f\n", 4, PI);

    float X = 7.0, Y = 9.0;
    printf("\nThe float Division is : %.3f / %.3f = %.3f\n", X, Y, X / Y);

    double d = 12.45;
    printf("\nThe double value is : %.3f\n", d);
    printf("\nThe double value is : %.4f\n", d);
}