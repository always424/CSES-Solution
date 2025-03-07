#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    multiset<ll> b;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) {
        ll z; cin >> z;
        b.insert(z);
    }
    int  c= 0;
    sort(a.begin(), a.end());
    for(auto u : a){
        auto it = b.lower_bound(u-k);
        if(it != b.end() && *it <= u+k) {
            c++;
            b.erase(it);
        }
    }
 
    cout << c << "\n";
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    solve();
 
    return 0;
}
