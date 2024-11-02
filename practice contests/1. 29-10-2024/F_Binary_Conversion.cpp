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
        string a,b;
        cin >> a >> b;
        ll a0 = 0,a1 = 0,b0 = 0,b1 = 0,changes = 0;
        for(char c:a){
            c == '0' ? a0++ : a1++;
        }
        for(char c:b){
            c == '0' ? b0++ : b1++;
        }
        for(ll i=0; i<n; i++){
            if(a[i] != b[i]) changes++;
        }
        if(a0 != b0 || a1 != b1){
            cout << "NO" << '\n';
        }
        else{
            if(n == 2){
                if(changes == 0){
                    if((a0 == 2 && b0 == 2) || (a1 == 2 && b1 == 2)){
                        cout << "YES" << '\n';
                    }
                    else if(k == 2){
                        cout << "YES" << '\n';
                    }
                    else{
                        cout << "NO" << '\n';
                    }
                }
                else{
                    if(k == 1) cout << "YES" << '\n';
                    else cout << "NO" << '\n';
                }
            }
            else if(changes/2 <= k){
                cout << "YES" << '\n';
            }
            else{
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}