#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
  int n;
  cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  int w = 10000;
  vector<vector<bool>> dp(n + 1, vector<bool>(w + 1, false));
  dp[0][0] = true;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= w; j++)
    {
      if (!dp[i][j])
        continue;
      dp[i + 1][j] = true;
      if (j + p[i] <= w)
        dp[i + 1][j + p[i]] = true;
    }
  }
  int res = 0;
  for (int j = 0; j <= w; j++)
  {
    if (dp[n][j])
      res++;
  }
  cout << res << endl;
}
