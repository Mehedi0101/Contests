#include<bits/stdc++.h>
#define ll long long int
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

bool cmp(pair<ll,ll> a, pair<ll,ll> b){
    if(a.first == b.first) return a.second<=b.second;
    else return a.first>b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<pair<ll,ll>> v;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            v.push_back({x,i});
        }
        sort(v.begin(),v.end(),cmp);

        vector<bool> b(n,false);
        ll ans = 0;
        for(pair<ll,ll> p:v){
            ll cnt = 0;
            for(ll i=p.second; i>=0; i--){
                if(!b[i]){
                    b[i] = true;
                    cnt++;
                }
                else{
                    break;
                }
            }
            ans = max(ans,cnt-1);
        }
        cout << ans << endl;
    }
    return 0;
}