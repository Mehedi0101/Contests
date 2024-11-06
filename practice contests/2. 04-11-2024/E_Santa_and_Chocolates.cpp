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
        ll sum = 0;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            sum+=x;
        }
        if(sum < n){
            cout << "NO" << '\n';
        }
        else{
            if(k == 0){
                if((sum-n)%n == 0) cout << "YES" << '\n';
                else cout << "NO" << '\n';
            }
            else{
                cout << "YES" << '\n';
            }
        }
    }
    return 0;
}