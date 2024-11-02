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
        vector<ll> arr(n);
        vector<ll> ps(n+1);
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            arr[i] = x;
            ps[i+1] = ps[i]+x;
        }
        ll mx = 0;
        for(ll i=0; i<=n; i++){
            if((ps[n]-ps[i])%2 == 0){
                mx = n-i;
                break;
            }
        }
        for(ll i=n; i>=0; i--){
            if((ps[i]-ps[0])%2 == 0){
                mx = max(mx,i);
                break;
            }
        }
        cout << mx << '\n';
    }
    return 0;
}