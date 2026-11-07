
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> b(n);

    long long mn = LLONG_MAX;
    long long mx = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        mn = min(mn, b[i]);
        mx = max(mx, b[i]);
    }

    long long cntMin = 0, cntMax = 0;

    for (int i = 0; i < n; i++) {
        if (b[i] == mn) cntMin++;
        if (b[i] == mx) cntMax++;
    }

    long long maxDiff = mx - mn;
    long long ways;

    if (mn == mx) {
        ways = 1LL * n * (n - 1) / 2;
    } else {
        ways = cntMin * cntMax;
    }

    cout << maxDiff << " " << ways << '\n';

    return 0;
}
