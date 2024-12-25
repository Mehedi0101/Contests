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
        ll h,l,w;
        cin >> h >> l >> w;
        ll x = 2LL*(h*l)+2LL*(h*w)+2LL*(l*w);
        cout << 1000LL/x << endl;
    }
    return 0;
}