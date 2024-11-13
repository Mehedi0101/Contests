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
        ll odd = (n+1)/2, even;
        if(n%2 == 0) even = (n+1)/2;
        else even = n/2;
        if(x%2 == 0){
            cout << even-1 << '\n';
        }
        else{
            cout << odd-1 << '\n';
        }
    }
    return 0;
}