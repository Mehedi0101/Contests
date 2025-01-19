#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

bool cmp(pl a, pl b){
    return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        ll n,m;
        cin >> n >> m;
        vector<vector<ll>> v(n, vector<ll> (m));
        for(ll i=0; i<n; i++){
            for(ll j=0; j<m; j++){
                cin >> v[i][j];
            }
        }
        for(ll i=0; i<n; i++){
            sort(v[i].begin(),v[i].end());
        }
        bool ans = true;
        for(ll i=0; i<n; i++){
            for(ll j=0; j<m-1; j++){
                if(v[i][j+1]-v[i][j] != n){
                    ans = false;
                    break;
                }
            }
            if(!ans) break;
        }
        if(!ans) cout << -1 << endl;
        else{
            vector<pl> v2;
            for(ll i=0; i<n; i++){
                v2.push_back({v[i][0],i+1});
            }
            sort(v2.begin(),v2.end(),cmp);
            for(pl x:v2) cout << x.second << " ";
            cout << endl;
        }
    }
    return 0;
}