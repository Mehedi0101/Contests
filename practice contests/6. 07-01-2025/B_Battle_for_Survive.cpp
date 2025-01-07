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
        ll n,sum = 0;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            if(i < n-2) sum+=x;
            else if(i == n-2) sum = x-sum;
            else sum = x-sum;
        }
        cout << sum << endl;
    }
    return 0;
}