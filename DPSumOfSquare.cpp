// Given an integer A. Return minimum count of numbers, sum of whose squares is equal to A.

int Solution::countMinSquares(int A) {

    int dp[A+1];

    dp[0] = 0;

    for(int i=1; i<= A; i++)
    {
        int ans = i;

        for(int j=1; j*j<=i; j++)
        {
            ans = min(ans, dp[i-j*j]+1);
        }

        dp[i] = ans;
    }
