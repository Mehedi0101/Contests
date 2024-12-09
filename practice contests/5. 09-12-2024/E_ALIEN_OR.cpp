#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<string> v;
        for(ll i=0; i<n; i++){
            string str;
            cin >> str;
            ll cnt = 0;
            for(ll j=0; j<k; j++){
                if(str[j] == '1') cnt++;
            }
            if(cnt == 1) v.push_back(str);
        }
        vector<ll> v2(k,0);
        for(ll i=0; i<v.size(); i++){
            for(ll j=0; j<k; j++){
                if(v[i][j] == '1') v2[j]++;
            }
        }
        bool ans = true;
        for(ll i=0; i<k; i++){
            if(v2[i] == 0){
                ans = false;
                break;
            }
        }
        ans ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }
    return 0;
}