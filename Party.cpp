// In Danceland, one person can party either alone or can pair up with another person.

// Can you find in how many ways they can party if there are A people in Danceland?

// Note: Return your answer modulo 10003, as the answer can be large.

// 1. optimal substitution
// 2. subproblem overlapping
// 3. DP state dp[i]
// 4. DP expression dp[i] = dp[i-1] + (i-1) dp[i-2];
// 5. Base condition
// 6. DP table int dp[N+1]
// 7. complexity TC: O(n), SC: O(n)


#define mod 10003

int Solution::solve(int A) {

int dp[A+1];

dp[0] = 1; dp[1] = 1;

for(int i=2; i<A+1; i++)
{
    dp[i] = (dp[i-1]%mod + (i-1)%mod * dp[i-2]%mod)%mod;
}

  return dp[A];  
}
