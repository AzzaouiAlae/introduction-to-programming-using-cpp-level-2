#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char a;
    char A;

    a = tolower('A');
    A = toupper('a');

    cout << "a = " << a << endl;
    cout << "A = " << A << endl;

    cout << "isupper('A') = " << isupper('A') << endl;
    cout << "isupper('a') = " << isupper('a') << endl;

    cout << "\nislower('A') = " << islower('A') << endl;
    cout << "islower('a') = " << islower('a') << endl;

    cout << "\nisdigit('1') = " << isdigit('1') << endl;
    cout << "isdigit('A') = " << isdigit('A') << endl;

    cout << "\nispunct('/') = " << ispunct('/') << endl;
    cout << "ispunct('A') = " << ispunct('A') << endl;
}