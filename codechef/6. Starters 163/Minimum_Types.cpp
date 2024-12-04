#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,x;
        cin >> n >> x;
        vector<ll> a(n), b(n), c(n);
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        for(ll i=0; i<n; i++){
            cin >> b[i];
        }
        for(ll i=0; i<n; i++){
            c[i] = a[i]*b[i];
        }
        sort(c.rbegin(),c.rend());
        ll ans = 0, i = 0;
        while(x > 0 && i < n){
            ans++;
            x -= c[i];
            i++;
        }
        if(i == n && ans > 0) cout << -1 << '\n';
        else cout << ans << '\n';
    }
    return 0;
}