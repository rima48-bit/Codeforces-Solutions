
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<string, int> mp;

    while (n--) {
        string s;
        cin >> s;

        if (mp.find(s) == mp.end()) {
            cout << "OK\n";
            mp[s] = 1;
        } else {
            int k = mp[s];

            while (mp.find(s + to_string(k)) != mp.end()) {
                k++;
            }

            string newName = s + to_string(k);
            cout << newName << "\n";

            mp[s] = k + 1;
            mp[newName] = 1;
        }
    }

    return 0;
}
