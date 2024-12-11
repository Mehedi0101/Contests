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
        if(n%2 == 0) cout << -1 << '\n';
        else{
            ll i = 1, j = n-1;
            bool odd = true;
            for(ll k=1; k<=n; k++){
                if(odd){
                    cout << i << " ";
                    odd = false;
                    i+=2;
                }
                else{
                    cout << j << " ";
                    odd = true;
                    j-=2;
                }
            }
            cout << '\n';
        }
    }
    return 0;
}