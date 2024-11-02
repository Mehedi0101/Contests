#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        map<ll,bool> pos;
        for(ll i=0; i<str.size()-3; i++){
            if(str[i] == '1' && str[i+1] == '1' && str[i+2] == '0' && str[i+3] == '0'){
                pos[i] = true;
            }
        }
        ll q;
        cin >> q;
        while(q--){
            ll p;
            char v;
            cin >> p >> v;
            p--;
            str[p] = v;

            for(ll i=p-3; i<=p; i++){
                if(i<0 || i+3>=str.size()){
                    continue;
                }
                if(str[i] == '1' && str[i+1] == '1' && str[i+2] == '0' && str[i+3] == '0'){
                    pos[i] = true;
                }
                else{
                    auto it = pos.find(i);
                    if(it != pos.end()){
                        pos.erase(i);
                    };
                }
            }
            pos.empty() ? cout << "NO" << '\n' : cout << "YES" << '\n';
        }
    }
    return 0;
}