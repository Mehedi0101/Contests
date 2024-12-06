#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        ll sum = 0, ans = 0;
        while(n--){
            string s;
            cin >> s;
            sum += s.size();
            if(sum <= m) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}