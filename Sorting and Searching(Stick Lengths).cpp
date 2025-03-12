#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n; cin >> n;
    vector<ll>v(n);
    for(ll i = 0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    ll x = v[n/2];

    ll ans = 0;
    for(ll i = 0;i<n;i++){
        ans+=abs(v[i]-x);
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // int t; cin >> t;
    // t = 1;
    // while (t--) {
        solve();
    // }
    
    return 0;
}
