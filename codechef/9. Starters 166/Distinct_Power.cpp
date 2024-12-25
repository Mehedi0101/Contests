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
    return a.first > b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        vector<pl> v;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            v.push_back({x,i});
        }
        sort(v.begin(),v.end(),cmp);
        vector<ll> p(n);
        ll k = 1;
        for(ll i=0; i<n; i++){
            p[v[i].second] = k;
            k++;
        }
        ll ans = 0;
        for(ll i=0; i<n-1; i++){
            if(p[i]+1 != p[i+1] && p[i]-1 != p[i+1]) ans++;
        }
        cout << ans+1 << endl;
    }
    return 0;
}