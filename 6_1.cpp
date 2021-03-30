#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    auto b = a;
    sort(b.begin(), b.end());

    vector<int> res(n);
    rep(i, n) res[i] = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
    rep(i, n) cout << res[i] << endl;
}
