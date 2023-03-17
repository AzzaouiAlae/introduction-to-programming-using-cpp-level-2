#include <iostream>

using namespace std;

int ReadNum(string msg)
{
    int num = 0;
    cout << msg;
    cin >> num;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Invalide Number, " << msg;
        cin >> num;
    }
    return num;
}

int main()
{
    cout << "your number is : " << ReadNum("Enter your number : ") << endl;
}