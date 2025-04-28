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
        multiset<ll> s;
        for(ll &x:v){
            cin >> x;
            s.insert(x);
        }
        ll i = n-1;
        ll sum = 0;
        while(i >= 0){
            sum += *s.rbegin();
            cout << sum << " ";
            sum += v[i];
            sum -= *s.rbegin();
            auto it = s.find(v[i]);
            s.erase(it);
            i--;
        }
        cout << endl;
    }
    return 0;
}