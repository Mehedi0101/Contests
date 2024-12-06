#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        map<char,ll> mp;
        ll sum = 0;
        for(char c:str){
            mp[c]++;
            sum += c-'0';
        }
        ll rem = 9 - (sum%9);
            if(rem == 1){
                if((mp['3'] >= 1 && mp['2'] >= 2) || (mp['2'] >= 5)){
                    cout << "YES" << '\n';
                }
                else cout << "NO" << '\n';
            }
            else if(rem == 3){
                if((mp['3'] >= 2) || (mp['3'] >= 1 && mp['2'] >= 3) || (mp['2'] >= 6)){
                    cout << "YES" << '\n';
                }
                else cout << "NO" << '\n';
            }
            else if(rem == 5){
                if((mp['3'] >= 2 && mp['2'] >= 1) || (mp['3'] >= 1 && mp['2'] >= 4) || mp['2'] >= 7){
                    cout << "YES" << '\n';
                }
                else cout << "NO" << '\n';
            }
            else if(rem == 7){
                if((mp['3'] >= 2 && mp['2'] >= 2) || (mp['3'] >= 1 && mp['2'] >= 5) || mp['2'] >= 8){
                    cout << "YES" << '\n';
                }
                else cout << "NO" << '\n';
            }
            else if(rem == 9){
                cout << "YES" << '\n';
            }
            else if(rem == 8){
                if((mp['3'] >= 1 && mp['2'] >= 1) || (mp['2'] >= 4)){
                    cout << "YES" << '\n';
                }
                else cout << "NO" << '\n';
            }
            else if(rem == 6){
                if((mp['3'] >= 1) || (mp['2'] >= 3)){
                    cout << "YES" << '\n';
                }
                else cout << "NO" << '\n';
            }
            else if(rem == 4){
                if(mp['2'] >= 2) cout << "YES" << '\n';
                else cout << "NO" << '\n';
            }
            else if(rem == 2){
                if(mp['2'] >= 1) cout << "YES" << '\n';
                else cout << "NO" << '\n';
            }
    }
    return 0;
}