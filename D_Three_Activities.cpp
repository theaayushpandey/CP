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
    vector<ll> sky(n);

    vector<pair<ll, ll>> s(n), m(n), g(n);

    for (ll i = 0; i < n; i++)
    {
        ll f;
        cin >> f;
        s[i] = {f, i};
    }
    for (ll i = 0; i < n; i++)
    {
        ll f;
        cin >> f;
        m[i] = {f, i};
    }
    for (ll i = 0; i < n; i++)
    {
        ll f;
        cin >> f;
        g[i] = {f, i};
    }

    sort(s.rbegin(), s.rend());
    sort(g.rbegin(), g.rend());
    sort(m.rbegin(), m.rend());

    ll ans = 0;
    ll maxans = -1e9;
    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            for (ll k = 0; k < 3; k++)
            {
                if (g[k].second != s[i].second and g[k].second != m[j].second and m[j].second != s[i].second)
                {
                    ans = s[i].first + m[j].first + g[k].first;
                }
                maxans = max(ans, maxans);
            }
            maxans = max(ans, maxans);
        }
        maxans = max(ans, maxans);
    }
    cout << maxans << br;
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