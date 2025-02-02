#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main() {
    ll T;
    cin >> T;
    while (T--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n + 1);
        for (ll i = 1; i <= n; i++) {
            cin >> v[i];
        }
        if (n == k) {
            ll ans = n / 2 + 1;
            for (ll i = 2; i <= n; i += 2) {
                if (v[i] != i / 2) {
                    ans = i / 2;
                    break;
                }
            }
            cout << ans << endl;
        } 
        else {
            ll pos = 2;
            while (pos <= n - k + 2 && v[pos] == 1) {
                pos++;
            }
            if (pos > n - k + 2) {
                ll ans = 2;
                for (ll i = n - k + 1; i <= n; i += 2, ans++) {
                    if (v[i] != ans) break;
                }
                cout << ans << endl;
            } else {
                cout << 1 << endl;
            }
        }
    }
    return 0;
}