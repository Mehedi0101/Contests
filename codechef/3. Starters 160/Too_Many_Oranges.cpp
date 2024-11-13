#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        k >= n*10 && k <= n*12 ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }
    return 0;
}