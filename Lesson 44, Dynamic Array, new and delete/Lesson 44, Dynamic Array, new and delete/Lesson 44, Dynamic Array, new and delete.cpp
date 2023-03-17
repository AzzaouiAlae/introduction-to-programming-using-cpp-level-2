#include <iostream>

using namespace std;

int main()
{
    int NumOfStud = 1;
    cout << "enter Total number of students : ";

    cin >> NumOfStud;

    float* Student = new float[NumOfStud];

    cout << "\nPlease enter marks\n";

    for (int i = 0; i < NumOfStud; i++)    {
        cout << "Student" << i + 1 << " : ";
        cin >> *(Student + i);
    }

    cout << "\nresult of marks\n";

    for (int i = 0; i < NumOfStud; i++)    
        cout << "Student" << i + 1 << " : " << *(Student + i) << endl;            

    delete[] Student;
}