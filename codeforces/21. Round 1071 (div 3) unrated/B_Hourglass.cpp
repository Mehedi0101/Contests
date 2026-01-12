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
        ll s, k, m;
        cin >> s >> k >> m;

        if (k > s)
        {
            if (s - m > 0)
                cout << s - m << endl;
            else
                cout << 0 << endl;
        }
        else
        {
            ll cnt = m / k;
            ll rem = m - k * cnt;
            if (cnt % 2 != 0)
            {
                cout << max(0LL, k - rem) << endl;
            }
            else
            {
                cout << max(0LL, min(s, k - rem)) << endl;
            }
        }
    }
    return 0;
}