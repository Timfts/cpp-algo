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
    int *charMapCopy = new int[charsetSize];
    for (int c = 0; c < wordToMap.length(); c++)
    {
      int currentCharNumber = wordToMap[c];
      charMapCopy[currentCharNumber] += 1;
    }
    return charMapCopy;
  };

  auto compareMaps = [](int *firstMap, int *secondMap, int charsetSize) {
    for (int c = 0; c < charsetSize; c++)
    {
      bool isEquiv = firstMap[c] == secondMap[c];
      if (!isEquiv)
      {
        return false;
        break;
      }
    }
    return true;
  };

  int *charMap = new int[charsetSize];
  int *firstCharMap = fillCharMap(charMap, firstString, charsetSize);
  int *secondCharMap = fillCharMap(charMap, secondString, charsetSize);
  delete[] charMap;

  bool areMapsEquiv = compareMaps(firstCharMap, secondCharMap, charsetSize);

  delete[] firstCharMap;
  delete[] secondCharMap;
  return areMapsEquiv;
}

int main()
{
  auto printCorrectMessage = [](bool checkResult) {
    return checkResult ? "the second word is a permutation" : "the second word isn't a permutation";
  };
  bool isPermutation = checkPermutation("cenoaaa", "benoaaa", true);
  cout << printCorrectMessage(isPermutation) << endl;
}