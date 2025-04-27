#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        string s,ans = "";
        cin >> s;
        vector<ll> v(10);
        for(char c:s){
            v[int(c-'0')]++;
        }
        for(ll i=9; i>=0; i--){
            ll j = i;
            while(v[j] == 0){
                j++;
            }
            ans += j+'0';
            v[j]--;
        }
        
        cout << ans << endl;
    }
    return 0;
}