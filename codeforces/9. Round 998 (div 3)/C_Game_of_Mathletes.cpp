#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        ll n,k;
        cin >> n >> k;
        map<ll,ll> mp;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            if(x < k) mp[x]++;
        }
        ll ans = 0;
        for(auto [key,val]:mp){
            ll x = k-key;
            ll y = mp[x];
            ans += min(val,y);
        }
        cout << ans/2 << endl;
    }
    return 0;
}