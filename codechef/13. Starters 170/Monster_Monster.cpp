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
        ll n,x;
        cin >> n >> x;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        sort(v.rbegin(),v.rend());
        ll ans = 0, inc = 0;
        for(ll i=0; i<n; i++){
            ans = max(ans,v[i]+inc);
            inc += x;
        }
        cout << ans << endl;
    }
    return 0;
}