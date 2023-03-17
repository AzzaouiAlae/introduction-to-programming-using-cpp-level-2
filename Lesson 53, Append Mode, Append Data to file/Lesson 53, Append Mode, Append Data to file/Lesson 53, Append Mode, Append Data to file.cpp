#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream MyFile;
    MyFile.open("Data.txt", ios::out | ios::app);

    if (MyFile.is_open())
    {
        MyFile << "Hi, this is the first line\n";
        MyFile << "Hi, this is the Second line\n";

        MyFile.close();
    }
}