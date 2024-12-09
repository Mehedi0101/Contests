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
        map<ll,vector<ll>> mp;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            if(mp[x].empty()){
                mp[x].push_back(0);
            }
            mp[x].push_back(i);
        }
        for(auto [key,val]:mp){
            mp[key].push_back(n+1);
        }
        ll time = LLONG_MAX, clan = -1, mx;
        for(auto [key,val]:mp){
            mx = 0;
            for(ll i=1; i<val.size(); i++){
                ll x;
                if(i == 1 || i == val.size()-1){
                    x = val[i]-val[i-1]-1;
                }
                else{
                    x = (val[i]-val[i-1])/2;
                }
                mx = max(mx,x);
            }
            if(mx < time){
                time = mx;
                clan = key;
            }
        }
        cout << clan << " " << time << '\n';
    }
    return 0;
}