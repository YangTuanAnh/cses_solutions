#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
const ll oo = 1e9+7, maxN = 3e5+1;

void solve() {
    ll n; cin >> n;
    while (true) {
        cout << n << ' ';
        if (n==1) break;
        n = n & 1 ? n*3+1 : n >> 1;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve(), cout << '\n';
}
