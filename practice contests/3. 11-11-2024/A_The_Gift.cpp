#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b,c;
    cin >> a >> b >> c;
    a+c >= b ? cout << "YES" << '\n' : cout << "NO" << '\n';
    return 0;
}