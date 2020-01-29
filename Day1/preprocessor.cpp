/**
 *   Program to demonstrate the preprocessor working
 * which include different types of pre-processors
**/

/** 1 Macros
 * It basically defines a block of program.
 * When a micro is encountered by the compiler
 * it replaces the NAME with the whole code
 */

#include <iostream>
using namespace std;

#define LIMIT 5 // constant macro, no arguments

int main()
{
    for(int i = 0; i <= LIMIT; i++)
    {
        cout << i << "\n";
    }

    return 0;
}