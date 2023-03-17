#include <iostream>
#include <vector>

using namespace std;

bool ReadAgain()
{
    char Again;
    cout << "do you want to add number again y/n : ";
    cin >> Again;
    return Again == 'y' || Again == 'Y';
}

void ReadNumber(vector <int>& vNumbers)
{
    do {
        int Num;
        cout << "Enter your Number : ";
        cin >> Num;
        vNumbers.push_back(Num);
    } while (ReadAgain());
    cout << endl;
}

void PrintNum(vector <int> & vNumbers)
{
    for (int& Num : vNumbers)
        cout << Num << " ";

    cout << endl;
}

int main()
{
    vector <int> vNumbers;

    ReadNumber(vNumbers);

    PrintNum(vNumbers);
}