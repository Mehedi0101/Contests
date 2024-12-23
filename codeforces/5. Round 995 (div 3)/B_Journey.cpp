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

    ll t;
    cin >> t;
    while(t--){
        ll n, a, b, c;
        cin >> n >> a >> b >> c;
        ll s = (a+b+c);
        ll x = (n/s)*3;
        n -= ((n/s)*s);
        if(n > 0){
            n -= a;
            x++;
        }
        if(n > 0){
            n -= b;
            x++;
        }
        if(n > 0){
            n -= c;
            x++;
        }
        cout << x << endl;
    }
    return 0;
}