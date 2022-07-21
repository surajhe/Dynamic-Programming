// Given an aaray find max. subsequence sum
// In a subsequence, 2 adjacent elements can not be picked.

int maxSubsequenceSum(vector<int> V)
{
  int n = V.size();
  
  int dp[n+1];
  
  dp[0] = 0;
  dp[1] = max(V[0], V[1]);
  
  for(int i=0; i<=n; i++)
  {
    dp[i] = max(dp[i-1], dp[i-2] + V[i], V[i]);
  }
  
  return dp[n-1];
  
}
