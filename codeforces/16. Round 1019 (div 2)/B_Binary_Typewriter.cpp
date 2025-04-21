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
        ll cost = 0;
        if(str[0] == '0') cost++;
        else cost+=2;
        for(ll i=1; i<str.size(); i++){
            if(str[i] == str[i-1]) cost++;
            else cost+=2;
        }
        ll cnt0 = 0, cnt1 = 0;
        char x = '0', y = '1';
        for(ll i=1; i<n; i++){
            if(str[i] != str[i-1] && str[i-1] == x){
                cnt0++;
                x = '1';
            }
            if(cnt0 > 1) break;
        }
        for(ll i=1; i<n; i++){
            if(str[i] != str[i-1] && str[i-1] == y){
                cnt1++;
                y = '0';
            }
            if(cnt1 > 1) break;
        }
        if(cnt1 > 1) cost-=2;
        else if(cnt0 > 1) cost--;
        else if(str[0] == '1' && str[n-1] == '0') cost--;
        cout << cost << endl;
    }
    return 0;
}