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
        ll k = 2*n;
        bool ans = true;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            if(x <= max(2*i,2*(n-i-1))) ans = false;
        }
        ans ? yes : no;
    }
    return 0;
}