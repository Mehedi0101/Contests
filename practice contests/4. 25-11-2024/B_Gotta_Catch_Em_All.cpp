#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n, x, y, ans = 0;
        cin >> n >> x >> y;
        while(n--){
            ll p;
            cin >> p;
            ans += min(p*x,y);
        }
        cout << ans << '\n';
    }
    return 0;
}