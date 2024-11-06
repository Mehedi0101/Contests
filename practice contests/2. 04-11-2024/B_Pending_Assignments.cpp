#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll x,y,z;
        cin >> x >> y >> z;
        x*y <= z*1440 ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }
    return 0;
}