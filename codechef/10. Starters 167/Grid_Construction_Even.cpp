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
        ll x = 0;
        for(ll i=1; i<=n; i++){
            for(ll j=1; j<=n; j++){
                cout << (x+j)%n+1 << " ";
            }
            x += 2;
            cout << endl;
        }
    }
    return 0;
}