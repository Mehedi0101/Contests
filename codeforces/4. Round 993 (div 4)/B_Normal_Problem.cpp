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
        string str;
        cin >> str;
        reverse(str.begin(),str.end());
        for(ll i=0; i<str.size(); i++){
            if(str[i] == 'p') str[i] = 'q';
            else if(str[i] == 'q') str[i] = 'p';
        }
        cout << str << endl;
    }
    return 0;
}