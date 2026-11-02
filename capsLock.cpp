
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool shouldChange = true;

    for (int i = 1; i < s.length(); i++) {
        if (islower(s[i])) {
            shouldChange = false;
            break;
        }
    }

    if (shouldChange) {
        for (int i = 0; i < s.length(); i++) {
            if (isupper(s[i])) {
                s[i] = tolower(s[i]);
            } else {
                s[i] = toupper(s[i]);
            }
        }
    }

    cout << s << endl;

    return 0;
}
