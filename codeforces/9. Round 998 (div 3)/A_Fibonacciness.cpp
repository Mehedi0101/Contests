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
        ll a,b,d,e;
        cin >> a >> b >> d >> e;
        int ans = 0;
        for (int c = -200; c <= 200; c++) {
            int x = 0;
            if (a + b == c) x++;
            if (b + c == d) x++;
            if (c + d == e) x++;
            ans = max(ans, x);
        }
        cout << ans << endl;
    }
    return 0;
}