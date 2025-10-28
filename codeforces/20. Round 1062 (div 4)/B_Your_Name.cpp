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
        ll n;
        cin >> n;
        string a,b;
        cin >> a >> b;
        vector<int> v1(26), v2(26);
        for(char c:a){
            v1[c-'a']++;
        }
        for(char c:b){
            v2[c-'a']++;
        }
        bool ans = true;
        for(ll i=0; i<26; i++){
            if(v1[i] != v2[i]){
                ans = false;
                break;
            }
        }
        ans ? yes : no;
    }
    return 0;
}