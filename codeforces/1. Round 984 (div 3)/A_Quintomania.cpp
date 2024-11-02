#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> arr(n);
        bool p = true;
        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }
        for(ll i=0; i<n; i++){
            if(i==0){
                if(abs(arr[i+1]-arr[i]) != 7 && abs(arr[i+1]-arr[i]) != 5) p=false;
            }
            else if(i==n-1){
                if(abs(arr[i-1]-arr[i]) != 7 && abs(arr[i-1]-arr[i]) != 5) p=false;
            }
            else{
                if(abs(arr[i-1]-arr[i]) != 5 && abs(arr[i-1]-arr[i]) != 7) p=false;
                if(abs(arr[i+1]-arr[i]) != 5 && abs(arr[i+1]-arr[i]) != 7) p=false;
            }
        }
        p ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }
    return 0;
}