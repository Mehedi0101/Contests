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
        ll n,x;
        cin >> n >> x;
        for(ll i=0; i<n; i++){
            if(i == x) continue;
            else cout << i << " ";
        }
        if(x < n) cout << x;
        cout << endl;
    }
    return 0;
}