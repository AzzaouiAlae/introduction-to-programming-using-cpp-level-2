#include <iostream>
#include <vector>

using namespace std;

struct stPerson
{
    string firstName;
    string LastName;
    int salary;
};

void FullPerson(vector <stPerson> & vPersons)
{
    stPerson Person;

    Person.firstName = "Alae";
    Person.LastName = "Azzaoui";
    Person.salary = 4000;

    vPersons.push_back(Person);

    Person.firstName = "Salwa";
    Person.LastName = "Azzaoui";
    Person.salary = 6000;

    vPersons.push_back(Person);

    Person.firstName = "Younes";
    Person.LastName = "Azzaoui";
    Person.salary = 3000;

    vPersons.push_back(Person);
}

void PrintPerson(vector <stPerson> & vPersons)
{
    for (stPerson &Person : vPersons)
    {
        cout << endl << "First Name : " << Person.firstName << endl;
        cout << "Last Name : " << Person.LastName << endl;
        cout << "" << Person.salary << endl << endl;
    }
}

int main()
{
    vector <stPerson> vPersons;
    FullPerson(vPersons);

    PrintPerson(vPersons);
}