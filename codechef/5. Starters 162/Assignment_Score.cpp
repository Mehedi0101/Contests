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
        ll sum = 0;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            sum += x;
        }
        ll ans = (n+1)*50-sum;
        if(ans <= 0) cout << 0 << '\n';
        else if(ans > 100) cout << -1 << '\n';
        else cout << ans << '\n';
    }
    return 0;
}