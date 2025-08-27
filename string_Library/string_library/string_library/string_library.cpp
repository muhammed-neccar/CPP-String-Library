#include "clsString.h"
#include <iostream>
using namespace std;

int main() {
    clsString str("hello world, oop in c++");

    cout << "Original: " << str.value << endl;

    str.UpperFirstLetterOfEachWord();
    cout << "Capitalize words: " << str.value << endl;

    cout << "Word count: " << str.CountWords() << endl;

    str.RemovePunctuationsFromString();
    cout << "No punctuations: " << str.value << endl;

    return 0;
}