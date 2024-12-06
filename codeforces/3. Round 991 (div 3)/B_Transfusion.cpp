#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n, sum = 0;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
            sum += v[i];
        }
        if(sum % n != 0){
            cout << "NO" << '\n';
        }
        else{
            ll each = sum/n;
            for(ll i=1; i<n-1; i++){
                if(v[i-1] < each){
                    ll x = each-v[i-1];
                    v[i-1] += x;
                    v[i+1] -= x;
                }
                else if(v[i-1] > each){
                    ll x = v[i-1]-each;
                    v[i-1] -= x;
                    v[i+1] += x;
                }
            }
            bool ans = true;
            for(ll x:v){
                if(x != each){
                    ans = false;
                    break;
                }
            }
            ans ? cout << "YES" << "\n" : cout << "NO" << '\n';
        }
    }
    return 0;
}