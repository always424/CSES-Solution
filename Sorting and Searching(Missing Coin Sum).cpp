#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n; cin >> n;
    vector<ll>v(n);
    for(ll i= 0;i<n;i++) cin>> v[i];

    sort(v.begin(),v.end());

    ll ans = 1;
    for(auto u : v){
        if(ans < u){
            // cout << ans;
            break;
        }

        ans+=u;
    }
    cout << ans ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    
    return 0;
}
