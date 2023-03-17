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

int main()
{
    vector <string> vFileContent;

    LoadDataFromFile("Data.txt", vFileContent);

    for (string &Lines : vFileContent)
    {
        cout << Lines << endl;
    }
}