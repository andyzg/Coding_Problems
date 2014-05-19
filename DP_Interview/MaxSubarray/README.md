1. Maximum Sum of All Sub-arrays
======================
 A sub-array has one number of some continuous numbers. Given an integer array  with positive numbers and negative numbers, get the maximum sum of all  sub-arrays. Time complexity should be O(n).
For example, in the array {1, -2, 3, 10, -4, 7, 2,  -5}, its sub-array {3, 10, -4, 7, 2} has the  maximum sum 18.

Approach:
There's actually a much easier approach to this problem that doesn't utilize DP and that is a simple iterative method. One fact we know is that all positive numbers can be grouped together and that the starting/ending index is never in the middle. Knowing that there are negative numbers, we hope to compensate for the negative numbers using the grouped positive numbers.
The reason we try to compensate is for cases such as {100, -5, 100}. If we try to sum the -5, in return, we can get an extra 100, having a net sum of 95 which increases the maximum sum of this array.
In the case where the sum ends up being negative, we realize that we've gone too far and there may exist a maximum prior to adding the negative number. This is why we need to keep track of existing maximums.

This solution runs in O(n) time complexity and uses O(1) space complexity
