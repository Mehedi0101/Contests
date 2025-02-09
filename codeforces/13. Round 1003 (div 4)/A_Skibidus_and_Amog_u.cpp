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
        if(s[n-1] == 'i'){
            for(ll i=0; i<n-1; i++) cout << s[i];
            cout << "us" << endl;
        }
        else{
            for(ll i=0; i<n-2; i++) cout << s[i];
            cout << "i" << endl;
        }
    }
    return 0;
}