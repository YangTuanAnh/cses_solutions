#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
const ll oo = 1e9+7, maxN = 2e5+5;

int lis(vll &v) {
    int n = v.size();
    vll dp(n+1, oo);
    dp[0] = -oo;

    for (auto &i: v) {
        int pos = upper_bound(dp.begin(), dp.end(), i) - dp.begin();
        if (dp[pos-1] < i && i < dp[pos]) dp[pos]=i;
    }
    int ans=0;
    for (int i=0; i<=n; i++)
        if (dp[i]<oo) ans=i;
    return ans;
}
void solve() {
    int n; cin >> n;
    vll v(n); 
    for (auto &i: v) cin >> i;
    vll v0 = v;
    reverse(v0.begin(), v0.end());
    
    cout << max(lis(v), lis(v0));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve(), cout << '\n';
}
