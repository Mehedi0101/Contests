#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll h,x,y;
        cin >> h >> x >> y;
        h -= y;
        ll ans = 1;
        ans += h/x;
        if(h%x != 0) ans++;
        cout << ans << '\n';
    }
    return 0;
}