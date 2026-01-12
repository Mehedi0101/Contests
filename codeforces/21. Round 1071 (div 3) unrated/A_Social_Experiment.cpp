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
        ll x;
        cin >> x;
        if (x == 2)
            cout << 2 << endl;
        else if (x == 3)
            cout << 3 << endl;
        else
        {
            if (x % 2 == 0)
                cout << 0 << endl;
            else
                cout << 1 << endl;
        }
    }
    return 0;
}