#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
const ll oo = 1e18+7, maxN = 1e5+5;
#define x first
#define y second

void solve() {
    int l=1, r=1e9;
    string s;
    while (l<r) {
        int m = l + (r-l)/2;
        cout << "? " << m << endl;
        cin >> s;
        if (s == "YES") l = m+1;
        else r = m;
    }
    cout << "! " << l;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve(), cout << endl;
}