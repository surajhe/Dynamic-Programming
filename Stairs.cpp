// You are climbing a stair case and it takes A steps to reach to the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

int Solution::climbStairs(int A) {

    if(A == 0)
    {
        return 1;
    }

    int arr[A+1];

    arr[0] = 1;
    arr[1] = 1;

    for(int i=2; i<=A; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    return arr[A];

}
