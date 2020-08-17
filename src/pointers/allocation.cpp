#include <iostream>

using namespace std;



int main(){
  struct sSomeObject
  {
    int x = 0xA3A2A1A0;
    int y = 0xB3B2B1B0;
  };

  // Stack allocation (compile time)
  // sSomeObject pSomeObject[10];

  // Heap (run time)
  sSomeObject *pSomeObject = new sSomeObject[10];
  /* whenever when we request memory from the operating system
    during run time, it's a good practice to clean it later
  */
 delete[] pSomeObject;
}