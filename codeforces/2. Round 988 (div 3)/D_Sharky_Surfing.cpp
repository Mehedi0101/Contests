#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,m,l;
        cin >> n >> m >> l;
        vector<pair<ll,ll>> h;
        for(ll i=0; i < n; i++){
            ll x,y;
            cin >> x >> y;
            h.push_back({x,(y-x)+2});
        }
        map<ll,vector<ll>> b;
        for(ll i=0; i<m; i++){
            ll x,y;
            cin >> x >> y;
            b[x].push_back(y);
        }
        priority_queue<ll> pq;
        ll jump = 1, ans = 0;
        for(pair<ll,ll> p:h){
            auto it = b.begin();
            while(it != b.end() && it->first < p.first){
                for(ll x:it->second) pq.push(x);
                it++;
                b.erase(b.begin());
            }
            while(!pq.empty() && jump < p.second){
                jump += pq.top();
                pq.pop();
                ans++;
            }
            if(jump < p.second){
                ans = -1;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}