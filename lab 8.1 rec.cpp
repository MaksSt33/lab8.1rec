#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

bool ContainsTripleStars(char* str, int i = 0) {
    if (str[i + 2] == '\0') return false;
    if (str[i] == '*' && str[i + 1] == '*' && str[i + 2] == '*') return true;
    return ContainsTripleStars(str, i + 1);
}

char* ReplaceTripleStars(char* str, int i = 0) {
    if (str[i + 2] == '\0') return str;
    if (str[i] == '*' && str[i + 1] == '*' && str[i + 2] == '*') {
        str[i] = '!';
        str[i + 1] = '!';
        memmove(str + i + 2, str + i + 3, strlen(str + i + 2) + 1);
        return ReplaceTripleStars(str, i + 2);
    }
    return ReplaceTripleStars(str, i + 1);
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    if (ContainsTripleStars(str)) {
        cout << "String contains a group of '***'" << endl;
    }
    else {
        cout << "No '***' found" << endl;
    }

    cout << "Modified string: " << ReplaceTripleStars(str) << endl;
    return 0;
}
