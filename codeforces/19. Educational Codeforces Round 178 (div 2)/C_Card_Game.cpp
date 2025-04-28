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
        ll k; string c; cin >> k >> c;
        vector<ll> a,b;
        for(ll i=1;i<=k;i++) (c[i-1]=='A'?a:b).push_back(i);
        
        auto f=[&](ll x){
            if(x==1) return any_of(b.begin(),b.end(),[&](ll y){return y>1&&y<k;});
            if(x==k) return any_of(b.begin(),b.end(),[&](ll y){return y==1;});
            return any_of(b.begin(),b.end(),[&](ll y){return y>x;});
        };
        
        bool w=0;
        for(ll x:a) if(!f(x)) {w=1; break;}
        cout << (w?"Alice":"Bob") << endl;
    }
    return 0;
}