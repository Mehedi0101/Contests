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
        string a, b;
        cin >> a >> b;
        ll a1=0, b1=0;
        for(char c:a){
            if(c == '1') a1++;
        }
        for(char c:b){
            if(c == '1') b1++;
        }
        if(a1%2 == b1%2) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}