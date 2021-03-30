#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
  int n, w, k;
  cin >> n >> w >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<vector<int>> dp(n + 1, vector<int>(w + 1, false));
  dp[0][0] = 0;
  rep(i, n)
  {
    for (int j = 0; j <= w; j++)
    {
      if (!dp[i][j])
        continue;
      dp[i + 1][j] = dp[i][j];
      if (j + a[i] <= w)
        dp[i + 1][j + a[i]] = dp[i][j] + 1;
    }
  }
  if (dp[n][n] <= k)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
