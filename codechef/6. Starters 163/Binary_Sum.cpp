#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        if(n%2 == 0){
            if(n/2 == k) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
        else{
            if(n/2 == k || n/2+1 == k) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }
    return 0;
}