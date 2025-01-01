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
        ll n;
        cin >> n;
        map<ll,ll> pos,neg;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            if(x > 0) pos[i] = x;
            else if(x < 0) neg[i] = abs(x);
        }
        ll ans = 0;
        while(!pos.empty() && !neg.empty()){
            auto it = pos.begin();
            auto jt = neg.begin();
            ll x = min(it->second,jt->second);
            ans += (abs(it->first-jt->first))*x;
            it->second -= x;
            jt->second -= x;
            if(it->second == 0) pos.erase(it);
            if(jt->second == 0) neg.erase(jt);
        }
        cout << ans << endl;
    }
    return 0;
}