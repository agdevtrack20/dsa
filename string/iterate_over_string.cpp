#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";

    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << " ";
    }

    return 0;
}



#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";

    for (char ch : str) {
        cout << ch << " ";
    }

    return 0;
}



#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";

    for (string::iterator it = str.begin(); it != str.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}



#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";

    for (string::reverse_iterator it = str.rbegin(); it != str.rend(); it++) {
        cout << *it << " ";
    }

    return 0;
}


// Modify Characters While Iterating
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello";

    for (char &ch : str) {
        ch = toupper(ch);
    }

    cout << str;   // HELLO

    return 0;
}