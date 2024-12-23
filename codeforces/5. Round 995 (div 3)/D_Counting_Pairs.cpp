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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, x, y;
        cin >> n >> x >> y;
        vector<ll> v(n);
        ll sum = 0;
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end());
        ll mn= sum-y;
        ll mx = sum-x;
        ll ans = 0;
        for (ll i=0; i<n-1; i++) {
            ll tmn = mn - v[i];
            ll tmx = mx - v[i];

            auto l = lower_bound(v.begin() + i + 1,v.end(),tmn);
            auto r = upper_bound(v.begin() + i + 1,v.end(),tmx);

            ans += (r-l);
        }
        cout << ans << endl;
    }

    return 0;
}