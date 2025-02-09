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
        string s;
        cin >> s;
        ll n = s.size();
        bool x = false;
        for(ll i=0; i<n-1; i++){
            if(s[i] == s[i+1]){
                x = true;
                break;
            }
        }
        if(x) cout << 1 << endl;
        else cout << n << endl;
    }
    return 0;
}