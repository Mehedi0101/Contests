#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const int M = 2e5 + 10;
vector<ll> g1[M], g2[M], grp(M);
vector<bool> vis1(M), vis2(M);
map<pl, ll> ed;
ll grp1, grp2;

void dfs1(ll x) {
    grp[x] = grp1;
    vis1[x] = true;
    for (ll y : g2[x]) {
        if (!vis1[y]) {
            dfs1(y);
        }
    }
}

void dfs2(ll x) {
    vis2[x] = true;
    for (ll y : g1[x]) {
        if (!vis2[y] && ed[{x, y}] != 1) dfs2(y);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while (T--) {
        ll sz,e1,e2,cnt=0;
        grp1=0, grp2=0;
        ed.clear();
        cin >> sz >> e1 >> e2;

        for (ll i=0; i<sz; i++) {
            vis1[i] = false;
            vis2[i] = false;
            g1[i].clear();
            g2[i].clear();
        }

        for (ll i=0; i <e1; i++) {
            ll x, y;
            cin >> x >> y;
            x--;
            y--;
            g1[x].push_back(y);
            g1[y].push_back(x);
        }

        for (ll i=0; i<e2; i++) {
            ll x, y;
            cin >> x >> y;
            x--; y--;
            g2[x].push_back(y);
            g2[y].push_back(x);
        }

        for (ll i=0; i<sz; i++) {
            if (!vis1[i]) {
                grp1++;
                dfs1(i);
            }
        }

        for (ll i= 0; i<sz; i++) {
            for (ll y : g1[i]) {
                if (grp[i] != grp[y]) {
                    cnt++;
                    ed[{i, y}] = 1;
                }
            }
        }

        for (ll i=0; i<sz; i++) {
            if (!vis2[i]) {
                grp2++;
                dfs2(i);
            }
        }

        ll ans = (cnt/2)+(grp2-grp1);
        cout << ans << endl;
    }
    return 0;
}
