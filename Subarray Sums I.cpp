#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef float fl;
typedef double dl;
int mod = 1e9+7;


void solve() {
      int n,x; cin >> n>>x;
      vector<int>v(n);
      for(int i = 0;i<n;i++) cin >> v[i];
      ll sum = 0,l=0,cnt=0;
      for(int r = 0;r<n;r++){
              sum+=v[r];

              while(sum > x && l <=r){
                     sum-=v[l];
                     l++;
              }
              if(sum == x) cnt++;
      }
      
      cout << cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
//     int t; cin >> t;
//     while (t--) 
    solve();
    
    return 0;
}
