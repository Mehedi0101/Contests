#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,pos=-1;
        cin >> n;
        string s;
        cin >> s;
        for(ll i=0; i<n; i++){
            if(s[i] == '1'){
                pos = i;
                break;
            }
        }
        if(pos >= n-2 || pos == -1){
            cout << s << '\n';
        }
        else{
            for(ll i=0; i<pos; i++){
                cout << 0;
            }
            cout << 1;
            for(ll i=pos+1; i<n; i++){
                cout << 0;
            }
        }
        cout << '\n';
    }
    return 0;
}