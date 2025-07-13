#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    vector<int> pre(n), suf(n);
    pre[0] = arr[0];
    for (int i=1; i<n; i++) {
        pre[i] = min(pre[i-1], arr[i]);
    }
    suf[n-1] = arr[n-1];
    for (int i=n-2; i>=0; i--) {
        suf[i] = max(suf[i+1], arr[i]);
    }
    string ans;
    ans.reserve(n);
    for (int i = 0; i < n; i++) {
        if (arr[i] == pre[i] || arr[i] == suf[i])
            ans.push_back('1');
        else
            ans.push_back('0');
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
