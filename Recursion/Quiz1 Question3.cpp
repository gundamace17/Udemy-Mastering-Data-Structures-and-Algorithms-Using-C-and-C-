// Quiz1 Question3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int f(int& x, int c)
{
    c--;
    if (c == 0) return 1;
    x++;
    return f(x, c) * x;
}

int main()
{
    int p = 5;
    cout << f(p, p) << endl;
    return 0;
}

