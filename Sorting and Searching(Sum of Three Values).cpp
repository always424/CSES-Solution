#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,x; cin >> n >> x;
    vector<int>v;
    
    for(int i = 0;i<n;i++){
        int x; cin >> x;
        v.push_back(x);
    }
    map<int,int>mp;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            int req = x-v[i]-v[j];
            if(mp.count(req)) {
                cout << mp[req]+1 <<" " << i+1 <<" " << j+1;
                return 0;
            }
        }

        mp[v[i]] = i;
    }
    cout <<"-1";
    return 0;
}
