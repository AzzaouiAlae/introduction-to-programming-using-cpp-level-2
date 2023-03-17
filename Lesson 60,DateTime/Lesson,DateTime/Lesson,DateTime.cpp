#pragma warning(disable : 4996)

#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    time_t t = time(0);

    char* dt = ctime(&t);

    cout << dt;

    tm* gmtm = gmtime(&t);
    dt = asctime(gmtm);

    cout << dt;

    tm* now = localtime(&t);

    cout << now->tm_year + 1900 << endl;
    cout << now->tm_mon + 1 << endl;
    cout << now->tm_wday << endl;

}