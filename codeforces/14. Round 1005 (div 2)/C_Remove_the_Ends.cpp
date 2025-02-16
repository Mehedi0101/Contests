#include <bits/stdc++.h>
#define ll long long int
#define pl pair<long long, long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    
    while (T--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> pre(n+1, 0);
        vector<ll> suf(n+1, 0);
        
        for (ll i = 0; i < n; i++) {
            ll val;
            cin >> val;
            a[i] = val;
        }
        
        for (ll i = 0; i < n; i++) {
            ll prev = pre[i];
            ll cur = a[i];
            ll x = max(0LL, cur);
            pre[i + 1] = prev + x;
        }
        
        for (ll i = n - 1; i >= 0; i--) {
            ll nxt = suf[i + 1];
            ll cur = a[i];
            ll x = max(0LL, -cur);
            suf[i] = nxt + x;
        }
        
        ll mx = 0;
        for (ll i = 0; i <= n; i++) {
            ll prefix = pre[i];
            ll sufix = suf[i];
            ll total = prefix + sufix;
            mx = max(mx, total);
        }
        
        ll ans = mx;
        cout << ans << endl;
    }
    return 0;
}
