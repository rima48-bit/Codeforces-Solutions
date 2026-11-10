
#include <bits/stdc++.h>
using namespace std;

struct Segment {
    int l, r;
};

struct Compare {
    bool operator()(const Segment& a, const Segment& b) {
        int lenA = a.r - a.l + 1;
        int lenB = b.r - b.l + 1;

        if (lenA != lenB)
            return lenA < lenB;

        return a.l > b.l;
    }
};

void solve() {
    int n;
    cin >> n;

    vector<int> a(n + 1);

    priority_queue<Segment, vector<Segment>, Compare> pq;

    pq.push({1, n});

    for (int i = 1; i <= n; i++) {
        Segment cur = pq.top();
        pq.pop();

        int l = cur.l;
        int r = cur.r;

        int mid = (l + r) / 2;

        a[mid] = i;

        if (l <= mid - 1)
            pq.push({l, mid - 1});

        if (mid + 1 <= r)
            pq.push({mid + 1, r});
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
