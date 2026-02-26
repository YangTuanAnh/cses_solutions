#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
const ll oo = 1e9+7, maxN = 2e5+5;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> v(n); for (auto &i: v) cin >> i;
    vector<vll> dp(n, vll(m+1));
    if (v[0]==0)
        for (int i=1; i<=m; i++) dp[0][i]=1;
    else dp[0][v[0]]=1;
    for (int i=1; i<n; i++) {
        if (v[i]!=0) {
            int j = v[i];
            if (j-1>=0) dp[i][j] += dp[i-1][j-1];
            dp[i][j] += dp[i-1][j];
            if (j+1<=m) dp[i][j] += dp[i-1][j+1];
            dp[i][j] %= oo;
        } else
        for (int j=1; j<=m; j++) {
            if (j-1>=0) dp[i][j] += dp[i-1][j-1];
            dp[i][j] += dp[i-1][j];
            if (j+1<=m) dp[i][j] += dp[i-1][j+1];
            dp[i][j] %= oo;
        }
    }
    int ans = 0;
    for (int i=1; i<=m; i++) ans = (ans + dp[n-1][i]) % oo;
    cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve(), cout << '\n';
}
