#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll x1, x2, y1, y2;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    ll count = 0;
    if (x1 == x2 || y1 == y2)
        count = abs(y1 - y2) + abs(x1 - x2);
    else
        count = abs(x1 - x2) + abs(y2 - y1) + 2;

    cout << count << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}