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
        ll n,k;
        cin >> n >> k;
        vector<ll> v(n);
        for(auto &x:v) cin >> x;

        auto find = [&](ll start, ll dir){
            ll cnt = 0;
            for(ll i=start; i>=0 && i<n; i+=dir){
                if(v[i] > k) cnt--;
                else cnt++;
                if(cnt >= 0) return i;
            }
            return dir == 1 ? n : -1;
        };

        auto cs1 = [&](){
            ll first = find(0,1);
            if(first%2 == 0 && first+1 < n && v[first+1] > k) first++;
            ll second = find(first+1,1);
            return second < n-1;
        };

        auto cs2 = [&](){
            ll first = find(n-1,-1);
            if(((n-1)-first)%2 == 0 && first-1 > 0 && v[first-1] > k) first--;
            ll second = find(first-1,-1);
            return second > 0;
        };

        auto cs3 = [&](){
            ll first = find(0,1);
            ll second = find(n-1,-1);
            return second-first > 1;
        };

        cs1() || cs2() || cs3() ? yes : no; 
    }
    return 0;
}