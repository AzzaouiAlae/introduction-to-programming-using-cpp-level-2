#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> Num = { 1, 2, 3, 4, 5 };

    cout << "Initial Value : ";

    for (const int& i : Num)
        cout << i << " ";    

    cout << "\n\nUpdated Value : ";

    for (int& i : Num)
    {
        i = 20;
        cout << i << " ";
    }

    cout << "\n\nUpdated Value : ";

    Num[1] = 30;
    Num[2] = 50;
    Num[4] = 90;

    for (const int& i : Num)
        cout << i << " ";

        


}