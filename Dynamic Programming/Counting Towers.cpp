#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
const ll oo = 1e9+7, maxN = 2e5+5;

void solve() {
    int q, n = -1; cin >> q;
    vector<int> v_q(q); 
    for (auto &i: v_q) {
        cin >> i;
        n = max(n, i);
    }

    vector<vll> dp(n+1, vll(2));
    dp[1] = {1, 1};
    for (int i=2; i<=n; i++) {
        dp[i][0] = (4*dp[i-1][0] + dp[i-1][1]) % oo;
        dp[i][1] = (dp[i-1][0] + 2*dp[i-1][1]) % oo;
    }
    for (auto &i: v_q) cout << (dp[i][0] + dp[i][1]) % oo << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve(), cout << '\n';
}
