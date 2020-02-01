#include <iostream>
using namespace std;

// entry point of the program
int main()
{
  int arr [4] = {2, 3, 4, 5};
  for(int i = 0; i < 5; i++)
  {
    cout << arr [i] << "at an address of " << &arr [i] <<endl;
  }
  return 0;
}