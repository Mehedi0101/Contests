#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        vector<ll> d(n);
        for(ll i=0; i<n; i++){
            cin >> d[i];
        }
        ll ans = 0;
        for(ll i=0; i<m; i++){
            ll x;
            cin >> x;
            d[x-1]--;
            if(d[x-1] < 0) ans ++;
        }
        cout << ans << '\n';
    }
    return 0;
}