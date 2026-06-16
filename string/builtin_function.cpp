// 1. length()
string s = "Hello";
cout << s.length();   // 5

// 2. append()
string s = "Hello";
s.append(" World");
cout << s;    // Hello World


// 3. find()
string s = "Programming";
cout << s.find("gram");   // 3

// 4. substr()
string s = "Programming";
cout << s.substr(3, 4);   // gram

// 5. erase()
string s = "Programming";
s.erase(3, 4);
cout << s;   // Proming

// 6. insert()
string s = "Hllo";
s.insert(1, "e");
cout << s;   // Hello


// 8. push_back() and pop_back()
string s = "Cat";
s.push_back('s');
cout << s << endl;   // Cats
s.pop_back();
cout << s;           // Cat


// 9. resize()
string s = "abcdef";
s.resize(3);
cout << s; //abc

// Here are the most commonly used built-in functions of std::string in C++.

// Function	Description	Example
// length()	Returns the number of characters	str.length()
// size()	Same as length()	str.size()
// empty()	Checks if the string is empty	str.empty()
// clear()	Removes all characters	str.clear()
// append()	Adds text at the end	str.append("abc")
// push_back()	Adds one character at the end	str.push_back('!')
// pop_back()	Removes the last character	str.pop_back()
// substr(pos, len)	Returns a substring	str.substr(2, 3)
// find()	Finds the first occurrence	str.find("abc")
// rfind()	Finds the last occurrence	str.rfind("a")
// replace()	Replaces part of a string	str.replace(0, 3, "Hi")
// erase()	Removes characters	str.erase(2, 4)
// insert()	Inserts characters	str.insert(2, "XYZ")
// compare()	Compares two strings	str1.compare(str2)
// at()	Accesses a character with bounds checking	str.at(1)
// front()	Returns the first character	str.front()
// back()	Returns the last character	str.back()
// c_str()	Returns a C-style string (const char*)	str.c_str()
// swap()	Swaps two strings	str1.swap(str2)
