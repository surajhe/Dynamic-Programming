// Given a positive integer A, write a program to find the Ath Fibonacci number.

// In a Fibonacci series, each term is the sum of the previous two terms and the first two terms of the series are 0 and 1. i.e. f(0) = 0 and f(1) = 1. Hence, f(2) = 1, f(3) = 2, f(4) = 3 and so on.

// NOTE: 0th term is 0. 1th term is 1 and so on


#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    int n;

    cin >> n;

    int arr[n+1];
    arr[0] = 0; arr[1] = 1;

    for(int i = 2; i <= n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    cout << arr[n];

    
    return 0;
}
