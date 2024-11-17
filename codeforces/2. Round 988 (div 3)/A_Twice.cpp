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
        map<ll,ll> mp;
        while(n--){
            ll x;
            cin >> x;
            mp[x]++;
        }
        ll ans = 0;
        for(auto it=mp.begin(); it != mp.end(); it++){
            ans += it->second/2;
        }
        cout << ans << '\n';
    }
    return 0;
}