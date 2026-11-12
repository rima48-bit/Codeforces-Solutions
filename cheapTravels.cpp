
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int ans = min(n * a, (n / m) * b + min((n % m) * a, b));

    cout << ans << '\n';

    return 0;
}
