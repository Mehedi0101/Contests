#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b,c;
    cin >> a >> b >> c;
    ll op1 = 2*a+3*b;
    ll op2 = 2*c+b;
    cout << min(op1,op2) << '\n';
    return 0;
}