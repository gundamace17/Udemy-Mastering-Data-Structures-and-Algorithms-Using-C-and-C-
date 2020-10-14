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

/*
o/p: 1*9*9*9*9 = 6561
Expalanation of the Algorithm

Because the first pararmeter is passed by reference,
the x value will be what the last call used, 9.

              multiply by x=9
      f(5, 5) <----|
     /       \     |
    /         \    |   multiply by x=9
c=4, x=6       f(6, 4) <----|
              /       \     |
             /         \    |   multiply by x=9
        c=3, x=7        f(7, 3) <----|
                       /       \     |
                      /         \    |    multiply by x=9
                 c=2, x=8        f(8, 2) <----------|
                                /       \           |
                               /         \          |
                          c=1, x=9        f(9, 1)->return 1
                                         /       \
                                        /         \
                                      c=0          No more fun call
     
*/
