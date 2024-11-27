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
        vector<ll> b(n-1);
        for(ll i=0; i<n-1; i++){
            cin >> b[i];
        }
        sort(b.begin(),b.end());
        vector<ll> a(n);
        a[0] = 1;
        for(ll i=0; i<n-1; i++){
            a[i+1] = b[i]-a[i];
        }
        for(ll x:a) cout << x << " ";
        cout << endl;
    }
    return 0;
}