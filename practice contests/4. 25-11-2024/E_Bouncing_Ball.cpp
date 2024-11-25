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
        vector<ll> v(n);
        vector<ll> ps(n+1,0);
        for(ll i=0; i<n; i++){
            cin >> v[i];
            ps[i+1] = ps[i]+v[i];
        }
        ll ans = 0;
        for(ll i=0; i<n; i++){
            if(v[i] == 0){
                if(ps[i]-ps[0] == ps[n]-ps[i+1]) ans += 2;
                else if(abs((ps[i]-ps[0]) - abs(ps[n]-ps[i+1])) == 1) ans += 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}