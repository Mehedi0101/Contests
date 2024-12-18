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
        ll n,m,k;
        cin >> n >> m >> k;
        ll mp = 2*(m+n);
        if(k < 4) cout << 4-k << endl;
        else if(mp >= k){
            if(k%2 != 0) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else{
            cout << k-mp << endl;
        }
    }
    return 0;
}