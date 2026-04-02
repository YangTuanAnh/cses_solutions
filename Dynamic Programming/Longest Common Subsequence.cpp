#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
const ll oo = 1e9+7, maxN = 2e5+5;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &i: a) cin >> i;
    for (auto &i: b) cin >> i;
    vector<vector<int>> dp(n+1, vector<int>(m+1));
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++) {
            if (a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    vector<int> ans;
    for (int i=n, j=m; i!=0 && j!=0;) {
        if (dp[i][j] == dp[i-1][j]) i--;
        else if (dp[i][j] == dp[i][j-1]) j--;
        else if (dp[i][j] != dp[i-1][j-1]) {
            ans.push_back(b[j-1]);
            i--; j--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for (auto &i: ans) cout << i << ' ';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve(), cout << '\n';
}
