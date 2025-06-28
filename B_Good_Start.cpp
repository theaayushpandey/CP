#include <bits/stdc++.h>
using namespace std;

#define br '\n'
#define fastIO()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define pb push_back
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define all(x) x.begin(), x.end()
#define sz(x) ((long long)(x).size())
using ll = long long;

const ll INF = 1e18;
const ll MOD = 1e9 + 7;

void theaayushpandey()
{
    ll w, h, a, b;
    cin >> w >> h >> a >> b;
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if ((x2 - x1) % a != 0 and (y2 - y1) % b != 0)
    {
        no return;
    }
    else if ((x1 == x2) and (y2 - y1) % b != 0)
    {
        no return;
    }
    else if ((y1 == y2) and (x2 - x1) % a != 0)
    {
        no return;
    }

    yes;
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