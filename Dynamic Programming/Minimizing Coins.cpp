#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
const ll oo = 1e9+7, maxN = 2e5+5;

void solve() {
    int n, x; cin >> n >> x;
    vll v(n); for (auto &i: v) cin >> i;
    vll dp(x+1, oo);
    dp[0] = 0;
    for (int i=1; i<=x; i++)
        for (auto &j: v)
            if (i-j>=0) dp[i] = min(dp[i], dp[i-j]+1);
    cout << (dp[x] == oo ? -1 : dp[x]);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve(), cout << '\n';
}
