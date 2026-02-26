#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
const ll oo = 1e9+7, maxN = 2e5+5;

void solve() {
    string a, b; cin >> a >> b;
    if (a.size() > b.size()) swap(a, b);
    int n = a.size(), m = b.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1));
    for (int i=0; i<=n; i++) dp[i][0] = i;
    for (int i=0; i<=m; i++) dp[0][i] = i;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++) {
            if (a[i-1]==b[j-1]) dp[i][j] = dp[i-1][j-1];
            else dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
        }
    cout << dp[n][m];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve(), cout << '\n';
}
