#include<bits/stdc++.h>
#define ll long long int
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
        ll m,a,b,c;
        cin >> m >> a >> b >> c;
        ll ma = m, mb = m;
        ll zero = 0;
        ma = max(zero,ma-a);
        mb = max(zero,mb-b);
        ll ma2 = max(zero,ma-c);
        c -= (ma-ma2);
        ll mb2 = max(zero,mb-c);
        cout << 2*m-(ma2+mb2) << endl;
    }
    return 0;
}