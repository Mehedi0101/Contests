#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n, k, v;
        cin >> n >> k >> v;
        vector<ll> h(n);
        ll mx = 0, sum = 0;
        for(ll i=0; i<n; i++){
            cin >> h[i];
            mx = max(mx,h[i]);
            sum += h[i];
        }
        if(k+mx > v+sum-mx) cout << "Ved" << '\n';
        else if(k+mx < v+sum-mx) cout << "Varun" << '\n';
        else cout << "Equal" << '\n';
    }
    return 0;
}