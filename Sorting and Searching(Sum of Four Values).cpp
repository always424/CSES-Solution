#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef float fl;
typedef double dl;
int mod = 1e9+7;


void solve() {
      int n,x; cin >> n >> x;
      vector<int>v(n);
      for(int i = 0;i<n;i++) cin >> v[i];
      map<int,pair<int,int>>mp;

      for(int k = 0;k<n;k++){
            for(int l = k+1;l<n;l++){
                  ll sum  = v[l]+v[k];
                  ll rem = x-sum;
                  if(mp.count(rem)){
                        cout << mp[rem].first +1<<" " << mp[rem].second+1<<" " << k+1 <<" " << l+1 <<"\n";
                        return;
                  }
            }

            for(int i = 0;i<k;i++) mp[v[k] + v[i]] = {i,k};
      }

      cout << "IMPOSSIBLE";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // int t; cin >> t;
    // while (t--) 
    solve();
    
    return 0;
}
