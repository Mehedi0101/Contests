#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll x;
        cin >> x;
        vector<ll> odd,even;
        for(ll i=1; i<=x; i++){
            if(x%i == 0){
                i%2 == 0 ? even.push_back(i) : odd.push_back(i);
            }
        }
        if(even.size() > odd.size()) cout << 1 << '\n';
        else if(even.size() == odd.size()) cout << 0 << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}