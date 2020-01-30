/* Program that changes the output of the main printf statement
    by making the use of macros as shown below */

#include <iostream>
#include<stdio.h>
using namespace std;

void pun()
{
    #define printf(x, y) printf(x, 10);
}
int main()
{
    int i;
    cin >> i;
    printf("%d\n", i);

    return 0;
}