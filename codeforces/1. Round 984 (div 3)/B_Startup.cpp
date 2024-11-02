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
        map<ll,ll> bottles;
        while(k--){
            ll b,c;
            cin >> b >> c;
            bottles[b] += c;
        }
        deque<ll> price;
        for(auto it=bottles.begin(); it!=bottles.end(); it++){
            price.push_back(it->second);
        }
        sort(price.rbegin(),price.rend());
        ll cost = 0;
        while(n--){
            if(!price.empty()){
                cost += price.front();
                price.pop_front();
            }
        }
        cout << cost << '\n';
    }
    return 0;
}