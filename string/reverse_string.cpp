// reverse(start_iterator, end_iterator);

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str = "Hello";

    reverse(str.begin(), str.end());

    cout << str;   // olleH

    return 0;
}

// Explanation
// str.begin() → Points to the first character.
// str.end() → Points one position past the last character.
// reverse() reverses the characters between these two iterators.


// Reverse Only Part of a String
string s = "abcdef";
reverse(s.begin() + 1, s.begin() + 5);
cout << s;   // aedcbf

// Time Complexity
// O(n), where n is the number of characters being reversed.