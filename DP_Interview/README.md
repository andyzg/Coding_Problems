Some practice DP problems from Quora: http://www.quora.com/Programming-Interviews/What-are-the-top-10-most-popular-dynamic-programming-problems-among-interviewers
===================
All approaches through these problems must use dynamic programming

Given a matrix consisting of 0's and 1's, find the maximum size sub-matrix consisting of only 1's.
Given an array containing both positive and negative integers, find the contiguous array with the maximum sum.
Longest Increasing Subsequence - Find the length of the longest subsequence of a given sequence such that all the elements are sorted in increasing/non-decreasing order.
There are many problems which reduce to the this problem such as box stacking and the building bridges. These days the interviewers expect an NLogN solution.
Edit Distance - Given two strings and a set of operations Change (C), insert (I) and delete (D) , find minimum number of edits (operations) required to transform one string into another.
0/1 Knapsack Problem - A thief robbing a store and can carry a maximal weight of W into their knapsack. There are n items and ith item weigh wi and is worth vi dollars. What items should thief take?
Balanced Partition - You have a set of n integers each in the range 0 … K. Partition these integers into two subsets such that you minimize |S1 – S2|, where S1 and S2 denote the sums of the elements in each of the two subsets.
Coin Change - Given a value N, if we want to make change for N cents, and we have infinite supply of each of S = { S1, S2, .. , Sm} valued coins, how many ways can we make the change?
Longest Common Subsequence - Find the longest common subsequence of two strings A and B where the elements are letters from the two strings and they should be in the same order.
Longest Palindromic Subsequence - The question is same as above but the subsequence should be palindromic as well.
Minimum Number of Jumps - Given an array of integers where each element represents the maximum number of steps that can be made forward from that element, find the minimum number of jumps to reach the end of the array (starting from the first element).

Or even more over here:
1. Maximum Sum of All Sub-arrays 
 A sub-array has one number of some continuous numbers. Given an integer array  with positive numbers and negative numbers, get the maximum sum of all  sub-arrays. Time complexity should be O(n). 
For example, in the array {1, -2, 3, 10, -4, 7, 2,  -5}, its sub-array {3, 10, -4, 7, 2} has the  maximum sum 18.
2. Maximal Length of Incremental Subsequences 
Given an unsorted array, find the max length of subsequence in which the numbers  are in incremental order. 
For example: If the input array is {7, 2, 3, 1, 5, 8, 9,  6}, a subsequence with the most numbers in incremental order is {2, 3, 5, 8, 9}  and the expected output is 5.
3. Edit Distance 
Implement a function which gets the edit distance of two input strings. There  are three types of edit operations: insertion, deletion and substitution. Edit  distance is the minimal number of edit operations to modify a string from one to  the other.
4. Minimal Number of Coins for Change 
Please implement a function which gets the minimal number of coins, whose value  is v1, v2, …, vn, to make change for an amount  of money with value t. Any coin with value vi may duplicate for any  times to make change. 
For example, the minimal number of coins to make change for  15 out of a set of coins with value 1, 3, 9, 10 is 3. We can choose two coins  with value 3 and a coin with value 9. The number of coins for other choices  should be greater than 3.
5. Dynamic Programming on Stolen Values 
There are n houses built in a line, each of which contains some value in  it. A thief is going to steal the maximal value in these houses, but he cannot  steal in two adjacent houses because the owner of a stolen house will tell his  two neighbors on the left and right side. What is the maximal stolen  value?
6. Longest Substring without Duplication
Given a string, please get the length of the longest substring which does not have duplicated characters. Supposing all characters in the string are in the range from ‘a’ to ‘z’.
7. Maximal Product when Cutting Rope
Given a rope with length n, how to cut the rope into m parts with length n[0], n[1], ...,n[m-1], in order to get the maximal product of n[0]*n[1]* ... *n[m-1]? We have to cut once at least. Additionally, the length of the whole length of the rope, as well as the length of each part, are in integer value.
