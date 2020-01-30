/** Program to demonstrate the working of getline()
 * in cpp and it works and what are theproblems involved 
 * in the working of this function.
*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    int a = 4;

    while (a--)
    {
        getline(cin, str);

        while(str.length() == 0)
        {
            getline(cin, str);
        }
        cout << str << ": newline" << endl;
    }
    return 0;
    
}