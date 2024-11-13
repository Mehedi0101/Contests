#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        string a,b;
        cin >> a >> b;
        ll i=0, j=0;
        while(i < n && a[i] != 'a') i++;
        while(j < m && b[j] != 'a') j++;
        if(i != j) cout << "No" << '\n';
        else{
            map<char,ll> mp1,mp2;
            while(i<n){
                mp1[a[i]]++;
                i++;
            }
            while(j<m){
                mp2[b[j]]++;
                j++;
            }
            mp1['a'] == mp2['a'] ? cout << "Yes" << '\n' : cout << "No" << '\n';
        }
    }
    return 0;
}