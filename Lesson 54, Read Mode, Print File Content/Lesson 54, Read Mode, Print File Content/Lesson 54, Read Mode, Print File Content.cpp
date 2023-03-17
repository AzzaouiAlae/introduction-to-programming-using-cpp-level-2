#include <iostream>
#include <fstream> 
#include <string>

using namespace std;

void PrintDataFromFile(string FileName)
{
    fstream MyFile;
    MyFile.open("Data.txt", ios::in);

    if (MyFile.is_open())
    {
        string line = "";

        while (getline(MyFile, line))
        {
            cout << line << endl;
        }
        MyFile.close();
    }
}

int main()
{
    PrintDataFromFile("Data.txt");    
}