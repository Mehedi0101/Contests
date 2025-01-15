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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        map<ll,ll> mp;
        ll mx = 0;
        for(ll x:v){
            mp[x]++;
            mx = max(mx,mp[x]);
        }
        if(mx == mp[k]) cout << 0 << endl;
        else{
            bool b = false;
            map<ll,ll> mp2,mp3;
            ll mx2 = 0,mx3=0;
            for(ll x:v){
                mp2[x]++;
                mx2 = max(mx2,mp2[x]);
                if(mp2[k] >= mx2){
                    b = true;
                    break;
                }
            }
            for(ll i=n-1; i>=0; i--){
                mp3[v[i]]++;
                mx3 = max(mx3,mp3[v[i]]);
                if(mp3[k] >= mx3){
                    b = true;
                    break;
                }
            }
            b ? cout << 1 << endl : cout << 2 << endl;
        }
    }
    return 0;
}