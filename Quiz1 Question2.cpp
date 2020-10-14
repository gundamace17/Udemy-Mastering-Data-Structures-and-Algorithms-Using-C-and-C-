// Quiz1 Question2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void foo(int n, int sum)
{
    int k = 0, j = 0;
    if (n == 0) return;
    k = n % 10;
    j = n / 10;
    sum += k;
    foo(j, sum);
    printf("%d", k);
}

int main()
{
    int a = 2048, sum = 0;
    foo(a, sum);
    printf("%d\n", sum);
}

/*
o/p: 2 0 4 8 0
Explanation of the Algorithm:

      foo(2048, 0)
      /          \
     /            \
 k=8, j=204,     foo(204, 8)
 sum=8           /         \
(4th k printed) /           \
               /             \
           k=4, j=20,       foo(20, 12)
           sum=12           /         \
         (3rd k printed)   /           \
                          /             \
                      k=0, j=2,        foo(2, 12)
                      sum=12           /        \
                    (2nd k printed)   /          \
                                     /            \
                                 k=2, j=0,       foo(0, 14) -> n==0, end of the recursion
                                 sum=14                     (5th sum printed in main fun)
                              (1st k printed)
  
*/
