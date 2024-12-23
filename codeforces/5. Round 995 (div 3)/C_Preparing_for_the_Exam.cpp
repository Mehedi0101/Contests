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
        ll n,m,k;
        cin >> n >> m >> k;
        vector<ll> q(m), a(k);
        for(ll i=0; i<m; i++){
            cin >> q[i];
        }
        set<ll> s;
        for(ll i=1; i<=n; i++) s.insert(i);
        for(ll i=0; i<k; i++){
            cin >> a[i];
            s.erase(a[i]);
        }
        if(n == k){
            for(ll i=0; i<m; i++) cout << 1;
            cout << endl;
        }
        else if(n-k > 1){
            for(ll i=0; i<m; i++) cout << 0;
            cout << endl;
        }
        else{
            for(ll i=0; i<m; i++){
                if(q[i] == *s.begin()) cout << 1;
                else cout << 0;
            }
            cout << endl;
        }
    }
    return 0;
}