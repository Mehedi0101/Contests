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
        ll chef = 0, chefina = 0,d = 0;
        for(ll i=0; i<n; i++){
            string s = "";
            s+=a[i];
            s+=b[i];
            if(s == "RP"){
                chefina++;
            }
            else if(s == "PR"){
                chef++;
            }
            else if(s == "SP"){
                chef++;
            }
            else if(s=="PS"){
                chefina++;
            }
            else if(s=="SR"){
                chefina++;
            }
            else if(s=="RS"){
                chef++;
            }
            else{
                d++;
            }
        }
        if(chef > chefina) cout << 0 << '\n';
        else cout << (n-d)/2-chef+1 << '\n';
    }
    return 0;
}