
#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    int count = 0;

    for (char digit : n) {
        if (digit == '4' || digit == '7') {
            count++;
        }
    }

    if (count == 4 || count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
