#include <bits/stdc++.h>
#define ll long long int
#define pl pair<long long, long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while (T--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n), b(n), c(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;
        bool exists = true;

        for (ll i = 0; i < n; i++)
        {
            if (b[i] == -1)
                c[i] = -1;
            else
                c[i] = a[i] + b[i];
        }

        bool allzero = true;
        for (ll x : b)
        {
            if (x != -1)
            {
                allzero = false;
                break;
            }
        }

        if (allzero)
        {
            ll mn = LLONG_MAX, mx = -1;
            for (ll x : a)
            {
                if (x < mn)
                    mn = x;
                if (x > mx)
                    mx = x;
            }
            cout << k + 1 - (mx - mn) << endl;
        }
        else
        {
            ll cur = LLONG_MAX;
            for (ll x : c)
            {
                if (x != -1 && cur == LLONG_MAX)
                    cur = x;
                else if (x != -1 && cur != x)
                    exists = false;
            }
            for (ll x : a)
            {
                if (x > cur || x + k < cur)
                {
                    exists = false;
                    break;
                }
            }
            if (!exists)
                cout << 0 << endl;
            else
            {
                 cout << 1 << endl;
            }
        }
    }
    return 0;
}