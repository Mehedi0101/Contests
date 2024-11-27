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
        string s;
        cin >> s;
        map<char,ll> mp;
        for(char c:s){
            mp[c]++;
        }
        ll ans = 0;
        while(s != ""){
            char cur = s[0];
            mp[cur]--;
            string str = "";
            for(ll i=1; i<s.size(); i++){
                if(s[i] == cur) str += s[i];
                else{
                    cur = s[i];
                    mp[s[i]]--;
                }
            }
            s = str;
            ans++;
            if(mp['A'] == 0 || mp['B'] == 0){
                ans += max(mp['A'],mp['B']);
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}