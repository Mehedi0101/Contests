#include<bits/stdc++.h>
#define ll long long int
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        map<int,int> mp;
        vector<int> v(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
            if(mp[v[i]] == 0) mp[v[i]] = -1;
        }
        int x = 1;
        for(ll i=0; i<n; i++){
            if(mp[v[i]] == -1){
                cout << v[i] << " ";
                mp[v[i]] = 1;
            }
            else{
                while(mp[x] != 0){
                    x++;
                }
                cout << x << " ";
                mp[x] = 1;
            }
        }
        cout << endl;
    }
    return 0;
}