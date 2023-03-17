#include <iostream>
#include <vector>

using namespace std;

bool ReadAgain()
{
    char Again;
    cout << "do you want to add more Employees y/n : ";
    cin >> Again;
    return Again == 'y' || Again == 'Y';
}

struct stPerson
{
    string firstName;
    string LastName;
    int salary;
};

void FullPerson(vector <stPerson>& vPersons)
{
    stPerson Person;
    do {
        cout << "Enter the first Name : ";
        cin >> Person.firstName;
        cout << "Enter the Last Name : ";
        cin >> Person.LastName;
        cout << "Enter the Salary : ";
        cin >> Person.salary;

        vPersons.push_back(Person);

    } while (ReadAgain());
}

void PrintPerson(vector <stPerson>& vPersons)
{
    for (stPerson& Person : vPersons)
    {
        cout << endl << "First Name : " << Person.firstName << endl;
        cout << "Last Name : " << Person.LastName << endl;
        cout << "Salary : " << Person.salary << endl << endl;
    }
}

int main()
{
    vector <stPerson> vPersons;

    FullPerson(vPersons);
    PrintPerson(vPersons);

}