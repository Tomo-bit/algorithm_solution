#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
  int n, w;
  cin >> n >> w;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<vector<bool>> dp(n + 1, vector<bool>(w + 1, false));
  dp[0][0] = true;
  rep(i, n)
  {
    for (int j = 0; j <= w; j++)
    {
      if (!dp[i][j])
        continue;
      dp[i + 1][j] = true;
      if (j + a[i] <= w)
        dp[i + 1][j + a[i]] = true;
    }
  }
  if (dp[n][n])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
