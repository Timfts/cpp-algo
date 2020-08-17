#include <iostream>

using namespace std;

int main()
{
  const int myNumbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  const int *plocation0 = &myNumbers[0]; // get memory pointer for this item on the array
  cout << plocation0 << " = " << *plocation0 << endl; // get value stored in the pointer location with *

  for (int i = 0; i < 10; i++)
  {
    const int *currentArrayPointer = myNumbers + i;
    const int currentPointerValue = *(currentArrayPointer);
    cout << currentArrayPointer << " = " << currentPointerValue << endl;
    // this is called indirect addressing
  }
}