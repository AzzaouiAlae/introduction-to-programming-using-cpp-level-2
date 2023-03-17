#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void SaveVectorToFile(string FileName, vector <string> vFileContent)
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

int main()
{
    vector <string> vFileContent = {"Alae", "Salwa", "Oussama", "Youness"};

    SaveVectorToFile("Data.txt", vFileContent);
}