#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<char>> carpet(n, vector<char>(m));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> carpet[i][j];
            }
        }
        vector<string> layers;
        ll fi = 0, li = n - 1, fj = 0, lj = m - 1;
        while (fi <= li && fj <= lj)
        {
            string s = "";
            string pre = "";
            for (ll j = fj; j < lj; j++)
            {
                s += carpet[fi][j];
                if(pre.size() < 3){
                    pre += carpet[fi][j];
                }
            }

            for (ll i = fi; i < li; i++)
            {
                s += carpet[i][lj];
                if(pre.size() < 3){
                    pre += carpet[i][lj];
                }
            }

            for (ll j = lj; j > fj; j--)
            {
                s += carpet[li][j];
                if(pre.size() < 3){
                    pre += carpet[li][j];
                }
            }

            for (ll i = li; i > fi; i--)
            {
                s += carpet[i][fj];
                if(pre.size() < 3){
                    pre += carpet[i][fj];
                }
            }
            s+=pre;
            layers.push_back(s);
            fi++;li--;fj++;lj--;
        }
        ll cnt = 0;
        for(string s:layers){
            for(ll i=0; i<=s.size()-3; i++){
                if(s[i] == '1' && s[i+1] == '5' && s[i+2] == '4' && s[i+3] == '3'){
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}