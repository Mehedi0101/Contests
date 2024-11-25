#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll x = LLONG_MAX;
        while(n--){
            ll c;
            cin >> c;
            if(c >= k){
                x = min(x,c%k);
            }
        }
        if(x == LLONG_MAX) cout << -1 << '\n';
        else cout << x << '\n';
    }
    return 0;
}