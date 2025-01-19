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
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        bool ans = true;
        for(ll i=0; i<n-1; i++){
            ll mn = min(v[i],v[i+1]);
            v[i] = v[i]-mn;
            v[i+1] = v[i+1]-mn;
            if(v[i] > v[i+1]){
                ans = false;
                break;
            }
        }
        ans ? yes : no;
    }
    return 0;
}