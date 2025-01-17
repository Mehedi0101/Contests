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
        ll n,m;
        cin >> n >> m;
        vector<pl> v;
        for(ll i=0; i<n; i++){
            ll x,y;
            cin >> x >> y;
            v.push_back({x,y});
        }
        ll ans = 0, prev = 0, next = 0;
        ll peri = 2*(m+m);
        for(ll i=0; i<n; i++){
            if(i == 0 && n != 1){
                next = (m-v[i+1].first)+(m-v[i+1].second);
                ans += peri-next;
                // cout << next << " -> " << ans << endl;
            }
            else if(i == n-1){
                prev = next;
                ans += peri-prev;
                // cout << prev << " -> " << ans << endl;
            }
            else{
                prev = next;
                next = m-v[i+1].first+m-v[i+1].second;
                ans += peri-prev-next;
                // cout << prev << " -> " << next << " -> " << ans << endl;
            }
            // cout << ans << endl;
        }
        cout << ans << endl;
    }
    return 0;
}