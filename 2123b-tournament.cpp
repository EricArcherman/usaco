#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, j, k;
    cin >> n >> j >> k;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    if (k>1) cout << "yes\n";
    else {
        int sj = a[j-1];
        bool win = true;
        for (int i=0; i<n; i++) {
            if (a[i] > sj) win = false;
        }
        cout << (win ? "yes\n" : "no\n");
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
