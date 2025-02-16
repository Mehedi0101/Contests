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

    ll t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        unordered_map<ll, ll> f;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            if (f.find(a[i]) == f.end()) {
                f[a[i]] = 1;
            } else {
                f[a[i]]++;
            }
        }

        ll dc = 0;
        for (auto [k, v] : f) {
            if (v == 1) {
                dc++;
            }
        }
        
        set<ll> s;
        for (auto [k, v] : f) {
            if (v == 1) {
                s.insert(k);
            }
        }

        ll mx = 0, bl = -1, br = -1, l = 0;
        
        ll r = 0;
        while (r < n) {
            if (s.count(a[r]) != 0) {
                ll cur_l = l;
                while (cur_l <= r && s.count(a[cur_l]) != 0) {
                    cur_l++;
                }
                ll len = r - l + 1;
                if (len > mx) {
                    mx = len;
                    bl = l;
                    br = r;
                }
            } else {
                l = r + 1;
            }
            r++;
        }
        
        ll x = n - f.size();
        
        if (mx == 0) {
            cout << "0" << endl;
        } else {
            cout << bl + 1 << " " << br + 1 << endl;
        }
    }
    return 0;
}
