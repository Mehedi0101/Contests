#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b;
    cin >> a >> b;
    a-b < 0 ? cout << 0 << '\n' : cout << a-b << '\n';
    return 0;
}