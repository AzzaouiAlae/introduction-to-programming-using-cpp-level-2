#pragma once
#include <iostream>
using namespace std;

namespace MyInputNum
{
    int intInRange(string Message, int From, int To)
    {
        int Number;
        do {
            cout << Message;
            cin >> Number;
        } while (Number < From || Number > To);
        return Number;
    }

    float FloatInRange(string Message, int From, int To)
    {
        float Number;
        do {
            cout << Message;
            cin >> Number;
        } while (Number < From || Number > To);
        return Number;
    }

    int IntNum(string Message)
    {
        int Number;
        cout << Message;
        cin >> Number;
        return Number;
    }

    float FloatNum(string Message)
    {
        float Number;
        cout << Message;
        cin >> Number;
        return Number;
    }

    int intPrositiveNum(string Message)
    {
        int Number;
        do {
            cout << Message;
            cin >> Number;
        } while (Number <= 0);
        return Number;
    }

    float floatPrositiveNum(string Message)
    {
        float Number;
        do {
            cout << Message;
            cin >> Number;
        } while (Number <= 0);
        return Number;
    }
}