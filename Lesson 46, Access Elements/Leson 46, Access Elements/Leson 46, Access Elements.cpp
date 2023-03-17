#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> Num = { 10, 20, 30, 40, 50 };

    cout << "\nUsing .at\n";
    
    cout << "Num.at(0) = " << Num.at(0) << endl;
    cout << "Num.at(2) = " << Num.at(2) << endl;
    cout << "Num.at(4) = " << Num.at(4) << endl;

    cout << "\nUsing []\n";

    cout << "Num[0] = " << Num[0] << endl;
    cout << "Num[2] = " << Num[2] << endl;
    cout << "Num[4] = " << Num[4] << endl;
}