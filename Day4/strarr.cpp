/* Program to demonstrate the working of string in c/cpp
   also how to declare the string using different methods. */

#include<iostream>
#include <stdio.h>
#include<string> //should include this file

using namespace std;

int main()
{
    //initialize char array
    //2D array
    //char names[no. of elements][size ofelemnt]
    //size of element in char =no. of letters + null terminating character ie 6 + 1 = 7
    char names[4][7] = {"sahil", "minhaz","nishan", "akhil"};

    int namesLength = sizeof(names[2]) / sizeof(char);
    
    //print the sie of the char array
    printf("%d\n", namesLength);

    //loop to print each of the char array elemnt
    for(int i = 0; i < 4; i++)
    {
        cout << names[i] << " " << &names[i] << endl;
    }
}