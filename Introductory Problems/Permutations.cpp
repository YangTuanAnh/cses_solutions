#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
const ll oo = 1e9+7, maxN = 2e5+5;

void solve() {
    int n; cin >> n;
    if (n==2 || n==3) {
        cout << "NO SOLUTION";
        return;
    }
    for (int i=2; i<=n; i+=2) cout << i << ' ';
    for (int i=1; i<=n; i+=2) cout << i << ' ';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve(), cout << '\n';
}
