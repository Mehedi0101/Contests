#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,a,b;
        cin >> n >> a >> b;
        ll ans = 0;
        if(n%2 != 0){
            ans += a;
            n--;
        }
        if(a*2 >= b) ans += a*n;
        else ans += b*(n/2);
        cout << ans << '\n';
    }
    return 0;
}