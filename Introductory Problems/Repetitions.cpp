#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
const ll oo = 1e9+7, maxN = 2e5+5;

void solve() {
    string s; cin >> s;
    int curr = 1, ans=1;
    for (int i=1; i<s.size(); i++)
        if (s[i]==s[i-1]) curr++;
        else ans = max(ans, curr), curr = 1;
    ans = max(ans, curr);
    cout << ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve(), cout << '\n';
}
