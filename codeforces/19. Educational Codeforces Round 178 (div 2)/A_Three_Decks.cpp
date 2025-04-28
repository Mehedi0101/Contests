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
        ll a,b,c;
        cin >> a >> b >> c;
        if((a+b+c)%3 != 0) no;
        else if(a > (a+b+c)/3 || b > (a+b+c)/3) no;
        else yes;
    }
    return 0;
}