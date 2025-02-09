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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n), b(m);
        for(ll &x : a) cin >> x;
        for(ll &x : b) cin >> x;
        sort(b.begin(), b.end());

        ll mn = LLONG_MAX, mx = LLONG_MIN;
        bool ans = true;

        for(ll x : a){
            ll op1 = (x >= mx) ? x : mn;
            ll target = mx + x, op2 = mn;
            
            ll l = 0, r = m - 1, idx = m;
            while(l <= r){
                ll mid = l + (r - l) / 2;
                if(b[mid] >= target){
                    idx = mid;
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            
            if(idx < m) op2 = b[idx] - x;
            
            mx = min(op1, op2);
            if(mx == mn){ 
                ans = false; 
                break; 
            }
        }
        ans ? yes : no;
    }
    return 0;
}