#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n <= 4) cout << -1;
        else{
            ll i;
            for(i=1; i<=n; i+=2) cout << i << " ";
            i -= 2;
            ll j;
            for(j=2; j<=n; j+=2){
                if((i+j) % 3 == 0){
                    cout << j << " ";
                    break;
                }
            }
            for(ll k=2; k<=n; k+=2){
                if(k == j) continue;
                else cout << k << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}