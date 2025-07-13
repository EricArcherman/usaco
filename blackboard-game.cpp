#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    cout << ((n-1) % 4 == 3 ? "Bob\n" : "Alice\n");
    // alternatively we can check n % 4 == 0
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
