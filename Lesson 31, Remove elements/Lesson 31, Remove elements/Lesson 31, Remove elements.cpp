#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vNumbers;

    cout << "Size : " << vNumbers.size() << endl;
    cout << "Capacity : " << vNumbers.capacity() << endl << endl;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    cout << "Size : " << vNumbers.size() << endl;
    cout << "Capacity : " << vNumbers.capacity() << endl << endl;

    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();
    vNumbers.pop_back();

    cout << "Size : " << vNumbers.size() << endl;
    cout << "Capacity : " << vNumbers.capacity() << endl << endl;
}