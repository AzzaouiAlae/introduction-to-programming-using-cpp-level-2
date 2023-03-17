#pragma warning (disable : 4996)
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t t = time(0);

    char* dt = ctime(&t);
    cout << "Local Date : " << dt << endl;

    tm* gmtm = gmtime(&t);
    dt = asctime(gmtm);

    
    cout << "GMT Date : " << dt;
}