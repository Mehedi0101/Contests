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
        ll n, l, r;
        cin >> n >> l >> r;

        vector<ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];

        ll k = r - l + 1;
        vector<ll> p(v.begin(), v.begin() + r);
        sort(p.begin(), p.end());

        ll ps = 0;
        for(ll i = 0; i < k; i++) {
            ps += p[i];
        }

        vector<ll> s(v.begin() + l - 1, v.end());
        sort(s.begin(), s.end());
        ll ss = 0;
        for(ll i = 0; i < k; i++) {
            ss += s[i];
        }

        cout << min(ps, ss) << endl;
    }

    return 0;
}
