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
        ll n, chef;
        cin >> n;
        set<ll> s;
        for(ll i=1; i<=n ; i++){
            ll x;
            cin >> x;
            s.insert(x);
            if(i == 1) chef = x;
        }
        ll ans = 0;
        auto it = s.find(chef);
        if(it == s.begin()) ans += chef-1;
        else{
            auto jt = s.find(chef);
            jt--;
            ans += (chef-*jt)/2;
        }

        if(it == --s.end()) ans += 1000000-chef;
        else{
            auto jt = s.find(chef);
            jt++;
            ans += (*jt-chef)/2;
        }
        ans++;
        cout << ans << endl;
    }
    return 0;
}