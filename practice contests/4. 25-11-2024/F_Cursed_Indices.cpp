#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        multiset<ll> ms;
        vector<ll> ps(n+1,0);
        vector<ll> ans;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            ms.insert(x);
        }
        ll crs = 0;
        for(ll i=0; i<n; i++){
            auto it = ms.upper_bound(ps[i]);
            if(it != ms.end()){
                ps[i+1] = ps[i]+*it;
                ans.push_back(*it);
                ms.erase(it);
            }
            else{
                crs++;
                auto jt = ms.begin();
                ps[i+1] = ps[i]+*jt;
                ans.push_back(*jt);
                ms.erase(jt);
            }
        }
        cout << crs << '\n';
        for(ll x:ans) cout << x << " ";
        cout << '\n';
    }
    return 0;
}