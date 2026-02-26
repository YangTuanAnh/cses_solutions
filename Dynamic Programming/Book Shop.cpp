#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
const ll oo = 1e9+7, maxN = 2e5+5;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> h(n), s(n);
    for (auto &i: h) cin >> i;
    for (auto &i: s) cin >> i;
    vector<int> dp(x+1);
    for (int i=0; i<n; i++) {
        for (int j=x; j>=h[i]; j--)
            dp[j] = max(dp[j], dp[j-h[i]]+s[i]);
    }
    cout << dp[x];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve(), cout << '\n';
}
