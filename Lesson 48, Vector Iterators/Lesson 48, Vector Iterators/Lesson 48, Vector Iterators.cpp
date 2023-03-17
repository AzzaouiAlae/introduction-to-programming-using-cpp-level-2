#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> Num = { 1, 2, 3, 4, 10 };

    vector <int>::iterator iterNum;

    for (iterNum = Num.begin(); iterNum != Num.end(); iterNum++)
    {
        cout << *iterNum << " ";
    }
        
    
    cout << endl;
}