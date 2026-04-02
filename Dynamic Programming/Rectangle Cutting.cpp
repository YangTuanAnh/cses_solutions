#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
const ll oo = 1e9+7, maxN = 2e5+5;

void solve() {
    int a, b; cin >> a >> b;
    vector<vector<int>> dp(a+1, vector<int>(b+1));
    for (int i=1; i<=a; i++)
        for (int j=1; j<=b; j++) {
            if (i==j) continue;
            int best = oo;
            for (int k=1; k<i; k++) {
                best = min(best, dp[k][j]+dp[i-k][j]);
            }
            for (int k=1; k<j; k++) {
                best = min(best, dp[i][k]+dp[i][j-k]);
            }
            dp[i][j] = best+1;
        }
    cout << dp[a][b];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve(), cout << '\n';
}
