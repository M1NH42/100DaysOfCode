/* Program to demonstrate the working of the string
    which is more efficient than the character array
    in terms of the memory as it has no fixed memory
    size
    - but only drawback is that it has fixed no. elements
    that means static type, we have to define the number 
    of elemnets at the compile time */
#include <iostream>
using namespace std;

//function to return 
void print (int size_array, string a[])
{
    for (int i = 0; i < size_array; i++)
    {
        cout << i << " " << a[i] << endl;
    }
}

//functon to take input
void in (int size_a, string a[])
{
    for (int i = 0; i < size_a; i++)
    {
        cin >> a[i];
    }
}

int main()
{
    int size_arr;
    cin >> size_arr;
    string array[size_arr];

    //function call
    //for input
    in(size_arr, array);

    //fnction call for output
    print(size_arr, array);
}