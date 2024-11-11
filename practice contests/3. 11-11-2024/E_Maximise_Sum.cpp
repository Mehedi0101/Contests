#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,min_pos = LLONG_MAX,min_neg = LLONG_MAX,cnt = 0,sum = 0;
        cin >> n;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            if(x >= 0){
                min_pos = min(min_pos,x);
                sum += x;
            }
            else if(x < 0){
                min_neg = min(min_neg,abs(x));
                sum += abs(x);
                cnt++;
            }
        }
        if(cnt % 2 == 0){
            cout << sum << '\n';
        }
        else{
            cout << sum-2*min(min_pos,min_neg) << '\n';
        }
    }
    return 0;
}