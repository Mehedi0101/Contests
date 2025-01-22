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
        ll n,ans = 0;
        cin >> n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
            ans += v[i];
        }
        
        sort(v.begin(), v.end());
        
        ll s = ans;
        for(ll i = 0; i < n; i++) {
            s -= v[i];
            ll k = s + (i + 1) * (i + 1);
            ans = max(ans, k);
        }
        
        cout << max(ans,n*n) << endl;
    }
    return 0;
}
