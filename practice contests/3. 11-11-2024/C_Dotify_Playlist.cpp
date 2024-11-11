#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,k,l;
        cin >> n >> k >> l;
        priority_queue<ll> pq;
        for(ll i=0; i<n; i++){
            ll len,lang;
            cin >> len >> lang;
            if(lang == l) pq.push(len);
        }
        if(pq.size() < k){
            cout << "-1" << '\n';
        }
        else{
            ll mx = 0;
            while(k != 0){
                mx += pq.top();
                pq.pop();
                k--;
            }
            cout << mx << '\n';
        }
    }
    return 0;
}