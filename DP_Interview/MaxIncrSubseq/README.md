Maximal Length of Incremental Subsequences
Given an unsorted array, find the max length of subsequence in which the numbers  are in incremental order.
For example: If the input array is {7, 2, 3, 1, 5, 8, 9,  6}, a subsequence with the most numbers in incremental order is {2, 3, 5, 8, 9}  and the expected output is 5.

Approach:
This problem can be solved nicely using a DP algorithm. To see this, you need to foresee that there are problems that are being solved multiple times, i.e. what's the longest incremental subsequence from i,j? Memoizing this information would largely help in increasing the efficiency in a potential algorithm.
Based on what I can think of, using a 1D array could work. The array would keep track of which next index it is going to based on the initial array given.
