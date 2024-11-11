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
        ll p = 0, neg = 0;
        deque<ll> dq;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            dq.push_back(x);
        }
        while(!dq.empty() && dq.front() <= 0){
            dq.pop_front();
        }
        while(!dq.empty() && dq.back() <= 0){
            dq.pop_back();
        }
        ll ans = 0;
        while(!dq.empty()){
            if(dq.front() < 0) ans++;
            dq.pop_front();
        }
        cout << ans << '\n';
    }
    return 0;
}