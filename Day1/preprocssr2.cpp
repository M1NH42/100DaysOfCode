/**
 * Macro with arguments
 **/
#include<iostream>
using namespace std;
#define AREA(l, b) (l * b) // macro with arguments

int main()
{
    int l1, b1;
    cout << "Enter the dimensions of the rect\n";
    cin >> l1 >> b1;
    int area = AREA(l1, b1); // calling macro by passing the args

    cout << "Area of the rectangle = " << area << endl;
}

/**
 * 2 File inclusion
 * It is basically including the files or what we call it header files
 * eg : <iostream> etc
 * 
 * For user defined fileswhich means if the program gets bigger
 * it's a good practice to devide the whole program into smaller programs
 * which can be declared with  #include"filename" 
**/