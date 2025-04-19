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
        vector<ll> lg(n), rg(n);
        for(ll i=0; i<n; i++) cin >> lg[i];
        for(ll i=0; i<n; i++) cin >> rg[i];
        vector<ll> v;
        ll ans = 0;
        for(ll i=0; i<n; i++){
            if(lg[i] > rg[i]){
                ans += lg[i];
                v.push_back(rg[i]);
            }
            else{
                ans += rg[i];
                v.push_back(lg[i]);
            }
        }
        sort(v.rbegin(),v.rend());
        for(ll i=0; i<k-1; i++){
            ans += v[i];
        }
        cout << ans+1 << endl;
    }
    return 0;
}