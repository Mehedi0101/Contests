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

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n),b(n+1,0);
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        for(ll i=0; i<n; i++){
            cin >> b[i];
        }
        ll ans = 0;
        for(ll i=0; i<n; i++){
            if(a[i] - b[i+1] > 0) ans += a[i]-b[i+1];
        }
        cout << ans << endl;
    }
    return 0;
}