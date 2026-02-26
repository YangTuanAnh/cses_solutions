#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
const ll oo = 1e9+7, maxN = 2e5+5;

void solve() {
    int n; cin >> n;
    vector<string> g(n);
    for (auto &i: g) cin >> i;
    vector<vector<int>> dp(n, vector<int>(n));
    dp[0][0]=g[0][0]!='*';
    for (int i=1; i<n; i++)
        if (g[0][i]!='*' && g[0][i-1]!='*')
            dp[0][i] = (dp[0][i] + dp[0][i-1]) % oo;
    for (int i=1; i<n; i++)
        if (g[i][0]!='*' && g[i-1][0]!='*') 
            dp[i][0] = (dp[i][0] + dp[i-1][0]) % oo;
    for (int i=1; i<n; i++)
        for (int j=1; j<n; j++) {
            if (g[i][j]=='*') continue;
            if (g[i-1][j]!='*') dp[i][j] += dp[i-1][j];
            if (g[i][j-1]!='*') dp[i][j] += dp[i][j-1];
            dp[i][j] %= oo;
        }
    cout << dp[n-1][n-1];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve(), cout << '\n';
}
