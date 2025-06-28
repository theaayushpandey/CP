#include <bits/stdc++.h>
using namespace std;

#define br '\n'
#define fastIO()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(x) x.begin(), x.end()
#define sz(x) ((long long)(x).size())
using ll = long long;

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

void theaayushpandey()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    ll k = 1;
    while (true)
    {
        for (ll i = 0; i < v.size() - 1; i++)
        {
            if ((v[i] & (1LL << (k - 1))) != (v[i + 1] & (1LL << (k - 1))))
            {
                cout << (1LL << k) << br;
                return;
            }
        }
        k++;
    }
}

signed main()
{
    fastIO();

    ll t;
    cin >> t;
    while (t--)
    {
        theaayushpandey();
    }

    return 0;
}