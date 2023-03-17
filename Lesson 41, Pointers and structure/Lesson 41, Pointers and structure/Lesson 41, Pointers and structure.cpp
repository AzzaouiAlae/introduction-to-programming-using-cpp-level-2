#include <iostream>

using namespace std;

struct stEmployee
{
    string FirstName;
    string LastName;
    int Salary;
};

int main()
{
    cout << "Struct \n";

    stEmployee Employee, * EmpPtr;

    Employee.FirstName = "Alae";
    Employee.LastName = "Azzaoui";
    Employee.Salary = 4000;

    cout << "First Name : " << Employee.FirstName << endl;
    cout << "Last Name : " << Employee.LastName << endl;
    cout << "Salary : " << Employee.Salary << endl;

    cout << "\nPointer \n";

    EmpPtr = &Employee;

    cout << "First Name : " << EmpPtr->FirstName << endl;
    cout << "Last Name : " << EmpPtr->LastName << endl;
    cout << "Salary : " << EmpPtr->Salary << endl;
}