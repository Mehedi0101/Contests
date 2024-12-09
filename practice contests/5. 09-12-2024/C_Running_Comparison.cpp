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
        vector<ll> a(n), b(n);
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        for(ll i=0; i<n; i++){
            cin >> b[i];
        }
        ll ans = 0;
        for(ll i=0; i<n; i++){
            if(a[i]*2 >= b[i] && b[i]*2 >= a[i]) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}