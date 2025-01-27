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
        ll n;
        cin >> n;
        vector<ll> v;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll ans = LLONG_MIN;
        while(v.size() != 1){
            ll sum = 0;
            for(ll x:v) sum+=x;
            ans = max(ans,sum);
            vector<ll> v2;
            for(ll i=1; i<v.size(); i++){
                v2.push_back(v[i]-v[i-1]);
            }
            ll sum1 = 0;
            for(ll x:v2) sum1+=x;
            ans = max(ans,sum1);
            vector<ll> v3;
            for(ll i=v.size()-1; i>0; i--){
                v3.push_back(v[i-1]-v[i]);
            }
            ll sum2 = 0;
            for(ll x:v3) sum2+=x;
            ans = max(ans,sum2);
            ans = max(ans,sum2);
            if(sum1 >= sum2) v = v2;
            else v = v3;
        }
        ans = max(ans,v[0]);
        cout << ans << endl;
    }
    return 0;
}