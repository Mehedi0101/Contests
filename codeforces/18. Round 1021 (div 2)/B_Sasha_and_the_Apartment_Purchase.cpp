#include <bits/stdc++.h>
#define ll long long int
#define pl pair<long long, long long>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while (T--) {
        ll n,k;
        cin >> n >> k;
        vector<ll> v(n);
        for(auto &x: v) cin >> x;
        sort(v.begin(),v.end());
        set<ll> s;
        for(ll i=0; i<n; i++){
            if(abs(i-(n-i-1)) <= k+1) s.insert(v[i]);
        }
        cout << *s.rbegin()-*s.begin()+1 << endl;
    }
    return 0;
}