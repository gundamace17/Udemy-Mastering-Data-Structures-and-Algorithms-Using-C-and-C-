// Quiz1 Question1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int f(int n)
{
    static int i = 1;
    if (n >= 5)
    {
        return n;
    }
    n += i;
    i++;
    return f(n);
}

int main()
{
    cout << f(1) << endl;
    return 0;
}

/*

               f(1) <-|
               /  \   | back to the previous call
              /    \  |
            n=2    f(2) <--|
            i=2    /   \   | back to the previous call
                  /     \  |
                n=4     f(4) <--------------|
                i=3     /   \               |
                       /     \              |
                     n=7     f(7) -> return 7 and go back to the previous call
                     i=4
                  
*/
