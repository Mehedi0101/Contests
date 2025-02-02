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
        set<ll> st1,st2;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            st1.insert(x);
        }
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            st2.insert(x);
        }
        if(st1.size()+st2.size() > 3) yes;
        else no;
    }
    return 0;
}