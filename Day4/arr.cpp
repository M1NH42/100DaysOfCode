#include <iostream>
using namespace std;

// entry point of the program
int main()
{
  //  initialised array with elements
  int arr [4] = {2, 3, 4, 5};

  //loop to print all the elements
  for(int i = 0; i < 4; i++)
  {
  // &arr[n] shows address of the elements on each iteration
    cout << arr [i] << "at an address of " << &arr [i] <<endl;
  }
  return 0;
}