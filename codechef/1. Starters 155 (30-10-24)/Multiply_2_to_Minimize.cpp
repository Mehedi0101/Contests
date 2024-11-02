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
        map<ll,ll> ans;
        vector<ll> ps(n+1,0);
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            ans[x]++;
            if(ans[x] == 2){
                ll q = 0;
                ll p = x;
                while(ans[p] != 1){
                    ans[p] = 0;
                    ans[p*2]++;
                    p = p*2;
                    q++;
                }
                ps[i+1] = i-q+1;
            }
            else{
                ps[i+1] = ps[i]+1;
            }
        }
        for(ll i=1; i<=n; i++){
            cout << ps[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}