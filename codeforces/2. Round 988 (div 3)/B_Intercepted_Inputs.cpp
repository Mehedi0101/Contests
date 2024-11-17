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
        map<ll,bool> mp;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            mp[x] = true;
        }
        ll k = n-2, i = 1;
        ll l=-1, r=-1;
        while(i <= k){
            if(k%i == 0){
                if(mp[i] && mp[k/i]){
                    l = i;
                    r = k/i;
                    break;
                }
                else i++;
            }
            else{
                i++;
            }
        }
        cout << l << " " << r << '\n';
    }
    return 0;
}