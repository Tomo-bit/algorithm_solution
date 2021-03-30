#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

const ll INF = 1LL << 50;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());

    ll left = 0, right = INF;
    while (right - left > 1)
    {
        ll x = (left + right) / 2;
        int cnt = 1;
        int prev = 0;
        rep(i, n)
        {
            if (a[i] - a[prev] >= x)
            {
                cnt++;
                prev = i;
            }
        }
        if (cnt >= m)
            left = x;
        else
            right = x;
    }
    cout << left << endl;
}
