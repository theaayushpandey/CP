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
    string s;
    cin >> s;
    string t;
    cin >> t;
    int n = s.length();
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '0' and s[i + 1] == '1' and t[i] == '0' and t[i + 1] == '1')
        {
            yes return;
        }
    }
    no
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