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
        string s;
        cin >> s;
        vector<ll> pos;
        for(ll i=s.size()-1; i>=0; i--){
            if(s[i] == '<') pos.push_back(i+1);
        }
        pos.push_back(0);
        for(ll i=0; i<s.size(); i++){
            if(s[i] == '>') pos.push_back(i+1);
        }
        vector<ll> ans(n);
        ll k = 1;
        for(ll x:pos){
            ans[x] = k;
            k++;
        }
        for(ll x:ans) cout << x << " ";
        cout << endl;
    }
    return 0;
}