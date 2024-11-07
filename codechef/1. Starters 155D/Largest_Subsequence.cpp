#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class LS{
    public:
    ll pos, ab, ba;
    LS(ll pos, ll ab, ll ba){
        this->pos = pos;
        this->ab = ab;
        this->ba = ba;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        char c[n];
        vector<LS> subList;
        for(ll i=0; i<n; i++){
            cin >> c[i];
            if(i == 0){
                subList.push_back(LS(i+1,0,0));
            }
            else{
                ll pab = subList[i-1].ab;
                ll pba = subList[i-1].ba;
                if(c[i-1] == 'a' && c[i] == 'b') pab++;
                if(c[i-1] == 'b' && c[i] == 'a') pba++;
                subList.push_back(LS(i+1,pab,pba));
            }
        }
        ll forward = 0;
        for(ll i=0; i<n; i++){
            ll iab, iba, nab, nba;
            iab = subList[i].ab;
            iba = subList[i].ba;
            nab = subList[n-1].ab;
            nba = subList[n-1].ba;
            if(abs(iab-iba) == abs(nab-nba)){
                forward = n-i;
                break;
            }
        }
        ll backward = 0;
        for(ll i=n-1; i>=0; i--){
            ll iab, iba, nab, nba;
            iab = subList[i].ab;
            iba = subList[i].ba;
            nab = subList[0].ab;
            nba = subList[0].ba;
            if(abs(iab-iba) == abs(nab-nba)){
                backward = i+1;
                break;
            }
        }
        cout << max(forward,backward) << '\n';
    }
    return 0;
}