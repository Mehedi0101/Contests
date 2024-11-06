#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll d;
        cin >> d;
        d--;
        cout << ceil(d*1.0/7*1.0) << '\n';
    }
    return 0;
}