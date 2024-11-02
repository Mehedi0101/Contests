#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,x;
        cin >> n >> x;
        ll k = n-x;
        ll chefina = 0, chef = 0;
        for(ll i=1; i<=k; i++){
            chefina += pow(2,i);
        }
        for(ll j=k+1; j<=n; j++){
            chef += pow(2,j);
        }
        cout << chef-chefina << '\n';
    }
    return 0;
}