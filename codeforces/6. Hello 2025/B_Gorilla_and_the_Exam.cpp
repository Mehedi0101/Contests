#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

bool cmp(pl a, pl b){
    return a.second < b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        ll n,k;
        cin >> n >> k;
        map<ll,ll> mp;
        while(n--){
            ll x;
            cin >> x;
            mp[x]++;
        }
        vector<pl> v;
        for(auto [key,val]:mp) v.push_back({key,val});
        sort(v.begin(),v.end(),cmp);
        // for(pl x:v) cout << x.first << " " << x.second << endl;
        ll ans = v.size(), rm = 0;
        for(ll i=0; i<v.size()&&k>0; i++){
            if(v[i].second <= k){
                k-=v[i].second;
                rm++;
            }
            else{
                break;
            }
        }
        
        cout << max(1LL,ans-rm) << endl;
    }
    return 0;
}