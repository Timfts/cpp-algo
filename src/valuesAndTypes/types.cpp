#include <iostream>
#include "../helpers/helperFunctions.h"

using namespace std;

int main(){
  // ---- BASIC TYPES ---
  Helpers::cenoura();
  // * char types
  char myChar = 'a'; // exaclty one byte in size, precision: at least 8 bits
  char16_t mySecondChar = 'a'; // at least 16 bits
  char32_t myThirdChar = 'a'; // at least 32 bits


  string myString = "testando a string";

  cout << myString << endl;
  return 0;
}