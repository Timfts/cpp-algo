#include <iostream>

/*
  Implement an algorithm to determine if a string has all unique characters.
  what if you cannot use additional data structures
*/

using namespace std;


// ASCII or Unicode string?
// if not ASCII, we would need to increase the storage size


bool hasOnlyUniqueChars(const string myStr, const bool useUnicode = false) {
    const int charsetLimit = 128;
    // cannot have only unique chars if length is bigger than the alphabet
    if (myStr.length() > charsetLimit) return false;
    bool charSet[charsetLimit] ={ 0 };

    for (int c = 0; c < myStr.length(); c++) {
        const int currentCharNumber = myStr[c];
        if (charSet[currentCharNumber] == true) {
            return false;
            break;
        }

        charSet[currentCharNumber] = true;
    }

    return true;

}

int main() {
    const string sentence = "absd";
    const bool sentenceHasUniqueChars = hasOnlyUniqueChars(sentence);
    function<string(bool)>  getSentenceResult = [](const bool hasRepeatedValue) {
        return hasRepeatedValue == true ? "The sentence has no duplicated chars" : "The sentence has duplicated chars";
    };

    cout << getSentenceResult(sentenceHasUniqueChars) << endl;


}