#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
const ll oo = 1e9+7, maxN = 2e5+5;

void solve() {
    int n; cin >> n;
    vector<int> dp(n+1, oo);
    dp[0]=0;
    for (int i=1; i<=n; i++) {
        int curr = i;
        while (curr) {
            dp[i] = min(dp[i], dp[i-curr%10]+1);
            curr /= 10;
        }
    }
    cout << dp[n];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve(), cout << '\n';
}
