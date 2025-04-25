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
        string str;
        cin >> str;
        ll cnt = 0;
        for(ll i=0; i<n; i++){
            for(ll j=0; j<n; j++){
                if(i == j && str[j] == '0')cnt++;
                else if(i != j && str[j] == '1')cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}