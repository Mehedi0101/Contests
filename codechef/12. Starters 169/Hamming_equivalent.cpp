#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

bool check_kth_bit_on_or_off(ll n, ll k){
	return (n>>k)&1;
}


ll count_bits(ll n){
    ll bits = 0;
	for(ll k=31; k>=0; k--){
    	if(check_kth_bit_on_or_off(n,k)) bits++;
	}
	return bits;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        bool ans = true;
        for(ll i=1; i<=32; i++){
            set<ll> val,pos;
            for(ll j=0; j<n; j++){
                if(count_bits(v[j]) == i){
                    val.insert(v[j]);
                    pos.insert(j+1);
                }
            }
            for(ll x:val){
                auto it = pos.find(x);
                if(it == pos.end()){
                    ans = false;
                    break;
                }
            }
            if(ans == false) break;
        }
        ans ? Yes : No;
    }
    return 0;
}