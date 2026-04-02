#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
const ll oo = 1e9+7, maxN = 2e5+5;

void solve() {
    int n; cin >> n;
    vector<int> v(n); 
    int tot = 0;
    for (auto &i: v) {
        cin >> i;
        tot += i;
    }
    vector<bool> dp(tot+1);
    dp[0]=1;
    for (auto &i: v)
        for (int j=tot; j>=i; j--)
            dp[j] = dp[j] | dp[j-i];
        
    vector<int> ans;
    for (int i=1; i<=tot; i++)
        if (dp[i]) ans.push_back(i);
    
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
