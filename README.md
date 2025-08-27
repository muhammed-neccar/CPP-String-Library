# clsString Utility Class

## 📌 Overview
`clsString` is a simple C++ utility class that encapsulates `std::string` and provides a rich set of string manipulation functions.  
It supports both **static methods** (operate on given strings) and **instance methods** (operate on the internal `_value`).

This project is meant as a **practice project** for OOP in C++ and clean code structuring.

---

## 🚀 Features
- **Case Handling**
  - Convert all to upper/lower
  - Capitalize first letter of each word
  - Invert letter cases

- **Counting**
  - Count capital letters, small letters, or all
  - Count vowels
  - Count specific letters (case-sensitive or not)
  - Count words

- **String Operations**
  - Trim left, right, or both
  - Split string by delimiter
  - Reverse words in string
  - Replace words
  - Remove punctuations

- **Printing**
  - Print each word
  - Print vowels
  - Print first letter of each word

---

## 🛠️ Usage
```cpp
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
