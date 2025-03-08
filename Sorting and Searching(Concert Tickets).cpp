#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n, m;
    cin >> n >> m;
    multiset<ll> s;
    for (ll i = 0; i < n; i++) {
        ll val; cin >> val;
        s.insert(val);
    }
    while (m--) {
        ll x; cin >> x;
        auto it = s.upper_bound(x);
        if (it == s.begin()) cout << "-1\n";
        else {
            --it;
            cout << *it << "\n";
            s.erase(it);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
    
    return 0;
}
