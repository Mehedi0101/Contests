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

        if(n-1 >= m) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}