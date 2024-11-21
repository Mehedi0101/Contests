#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll mx = 0;
        vector<ll> a(n),b(n);
        for(ll i=0; i<n; i++){
            cin >> a[i];
            mx = max(mx,a[i]);
        }
        for(ll i=0; i<n; i++){
            cin >> b[i];
            mx = max(mx,b[i]);
        }
        vector<pair<ll,ll>> p;
        for(ll i=0; i<n; i++){
            p.push_back({a[i],b[i]});
        }
        sort(p.rbegin(),p.rend());
        ll mx2 = 0;
        if(mx == max(p[0].first,p[0].second) && mx == max(p[1].first,p[1].second)){
            cout << "No" << '\n';
        }
        else{
            cout << "Yes" << '\n';
        }
    }
    return 0;
}