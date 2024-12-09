#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll i=1, j=n;
        if(n%2 != 0) j--;
        while(i<j){
            cout << i << " " << j << " ";
            i++;
            j--;
        }
        if(n%2 != 0) cout << n << " ";
        cout << '\n';
    }
    return 0;
}