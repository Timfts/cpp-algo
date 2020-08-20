#include <iostream>

using namespace std;

/* Given two strings, write a method to decide if one is a permutation of the other */
// try to do using basic types

bool checkPermutation(const string firstString, const string secondString, const bool useExtendedASCII)
{
  if (firstString.length() != secondString.length())
    return false;

  const int charsetSize = useExtendedASCII ? 256 : 128;

  auto fillCharMap = [](int *charMap, string wordToMap, int charsetSize = 128) {
    int *charMapCopy = charMap;
    for (int c = 0; c < wordToMap.length(); c++)
    {
      int currentCharNumber = wordToMap[c];
      charMapCopy[currentCharNumber] += 1;
    }
    return charMapCopy;
  };

  auto compareChars = []() {
    cout << "compare second word with map" << endl;
  };

  int *charMap = new int[charsetSize];
  int *filledCharMap = fillCharMap(charMap, firstString, charsetSize);
  delete[] charMap;

  // match filledCharMap with second word
  delete[] filledCharMap;
  return true;
}

int main()
{
  checkPermutation("cenoaaa", "batatax", true);
}