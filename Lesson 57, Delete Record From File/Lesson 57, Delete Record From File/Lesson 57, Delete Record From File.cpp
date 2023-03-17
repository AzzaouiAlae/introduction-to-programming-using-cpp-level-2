#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void LoadDataFromFile(string FileName, vector <string>& vFileContent)
{
    fstream MyFile;

    MyFile.open(FileName, ios::in);

    if (MyFile.is_open())
    {
        string line = "";

        while (getline(MyFile, line))
            vFileContent.push_back(line);

        MyFile.close();
    }
}

void SaveVectorToFile(string FileName, vector <string>& vFileContent)
{
    fstream MyFile;

    MyFile.open(FileName, ios::out);

    if (MyFile.is_open())
    {
        for (string line : vFileContent)
        {
            if (line != "")
                MyFile << line << endl;
        }
        MyFile.close();
    }
}

void DeletRecord(string Replaced, string Replace, string FileName)
{
    vector <string> vFileContent;

    LoadDataFromFile("Data.txt", vFileContent);

    for (string& line : vFileContent)
    {
        if (line == Replaced)
            line = Replace;
    }

    SaveVectorToFile("Data.txt", vFileContent);
}

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
    cout << "Befor Remove Data\n\n";
    PrintDataFromFile("Data.txt");
    DeletRecord("oussama", "oussama azzaoui", "Data.txt");    
    cout << "\n\n----------\n\n";
    PrintDataFromFile("Data.txt");
}