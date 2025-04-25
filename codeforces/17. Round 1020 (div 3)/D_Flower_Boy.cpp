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
        ll n,m;
        cin >> n >> m;
        vector<ll> a(n),b(m),pfx(m,LLONG_MAX),sfx(m,LLONG_MIN);

        for(auto &x:a) cin >> x;
        for(auto &x:b) cin >> x;

        ll j = 0;
        for(ll i=0; i<n; i++){
            if(j >= m) break;
            if(a[i] >= b[j]){
                pfx[j] = i;
                j++;
            }
        }

        j = m-1;
        for(ll i=n-1; i>=0; i--){
            if(j < 0) break;
            if(a[i] >= b[j]){
                sfx[j] = i;
                j--; 
            }
        }

        if(pfx[m-1] != LLONG_MAX || sfx[0] != LLONG_MIN){
            cout << 0 << endl;
        }
        else{
            ll ans = LLONG_MAX;
            for(ll i=1; i<m-1; i++){
                if(pfx[i-1] < sfx[i+1]) ans = min(ans,b[i]);
            }
            if(pfx[m-2] != LLONG_MAX) ans = min(ans,b[m-1]);
            if(sfx[1] != LLONG_MIN) ans = min(ans,b[0]);

            if(ans == LLONG_MAX) cout << -1 << endl;
            else cout << ans << endl;
        }
    }
    return 0;
}