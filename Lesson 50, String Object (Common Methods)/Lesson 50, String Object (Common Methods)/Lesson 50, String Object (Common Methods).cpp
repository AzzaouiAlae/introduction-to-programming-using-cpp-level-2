#include <iostream>
#include <string>

using namespace std;

int main()
{
    string MyStr = "My Name is Alae azzaoui, I love programming.";

    cout << "length : " << MyStr.length() << endl;

    cout << "at(3) : " << MyStr.at(3) << endl;

    MyStr.append(" @ProgrammingAdvice");
    cout << MyStr << endl;

    MyStr.insert(15, "Eddine");
    cout << MyStr << endl;

    cout << MyStr.substr(0, 29) << endl;

    MyStr.push_back('x');
    cout << MyStr << endl;

    MyStr.pop_back();
    cout << MyStr << endl;

    cout << MyStr.find("is") << endl;

    cout << MyStr.capacity() << endl;

    MyStr.clear();

    cout << MyStr.capacity() << endl;

    cout << MyStr << endl;
}