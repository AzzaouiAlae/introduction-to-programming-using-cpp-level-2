#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    for (int& Num : vNumbers)
        cout << Num << " ";
    
    cout << endl;
}