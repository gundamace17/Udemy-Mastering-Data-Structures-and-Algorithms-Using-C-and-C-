// Quiz1 Question5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void count(int n)
{
    static int d = 1;
    printf("%d", n);
    printf("%d", d);
    d++;
    if (n > 1) count(n - 1);
    printf("%d", d);
}

int main()
{
    count(3);
    return 0;
}

/*
o/p: 312213444
Expalanation of the Algorithm:

                      print d=4
            count(3) <----|
           /        \     |
          /          \    |
         /            \   |      print d=4
  print n=3            count(2) <----|
  print d=1           /        \     |
  d=d+1=2            /          \    |
                    /            \   |
             print n=2            count(1) <-----|
             print d=2           /        \      |
             d=d+1=3            /          \     |
                               /            \    |
                        print n=1            no more fun call
                        print d=3            print d=4
                        d=d+1=4

*/
