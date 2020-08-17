#include <iostream>

using namespace std;

/* Given two strings, write a method to decide if one is a permutation of the other */



bool checkPermutation(const string firstString, const string secondString) {
  if(firstString.length() != secondString.length()) return false;

  return true;
}

int main(){
  bool values = checkPermutation("cenoura", "batatax");
  cout << values << endl;
}