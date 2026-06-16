#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Alice";
    cout << name;
    return 0;
}


// 4. Initialize with Multiple Copies of a Character
string str(5, 'x');
Output: "xxxxx"

// 1. Input a String
string str;
cin >> str;      // Reads one word
// For a full line:
getline(cin, str);


string a = "Hello";
string b = " World";
string c = a + b;

cout << c;   // Hello World

string str = "Programming";
cout << str.length();   // 11
cout << str.size();     // 11


string str = "Hello";

cout << str[0];      // H
cout << str.at(1);   // e

string str = "Hello";
str[0] = 'Y';

cout << str;   // Yello



string s1 = "apple";
string s2 = "banana";

if (s1 == s2)
    cout << "Equal";
else
    cout << "Not Equal";



string str = "Programming";

cout << str.substr(3, 4);   // gram



string str = "Hello World";
size_t pos = str.find("World");

if (pos != string::npos)
    cout << "Found at index " << pos;


