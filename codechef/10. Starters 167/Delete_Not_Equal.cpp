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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll z = 0, o = 0;
        for(char c:s){
            if(c == '0') z++;
            else o++;
        }
        if(z == n || o == n) cout << n << endl;
        else cout << 1 << endl;
    }
    return 0;
}