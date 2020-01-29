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