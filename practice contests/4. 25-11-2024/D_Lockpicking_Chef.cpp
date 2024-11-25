#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        string s, k;
        cin >> s >> k;

        ll i=0, j=0, sum=0, ans=LLONG_MAX;
        while(j<n){
            if(j-i+1 != m) j++;
            else{
                sum = 0;
                for(ll p=i; p<=j; p++){
                    ll a = s[p]-'0';
                    ll b = k[p-i]-'0';
                    sum += min({abs(a-b),abs(a+10-b),abs(b+10-a)});
                }
                ans = min(ans,sum);
                i++; j++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}