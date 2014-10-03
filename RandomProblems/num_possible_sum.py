"""Attempt number two at this problem.

Given an array of positive integers and an integer k, return the count of the
number permutations of the integers in the array that sum up to k. Order
matters, and you may reuse numbers
"""

from collections import defaultdict

def solve(array, k, i=0, comb=[]):
    if i >= len(array):
        return 0

    if k == 0:
        print comb
        return num_combinations(comb)
    elif k < 0:
        return 0
    count = 0

    for j in range(i, len(array)):
        comb.append(array[j])
        count += solve(array, k-array[j], j, comb)
        comb.pop()

    return count

def num_combinations(comb):
    """Returns the number of combinations for the array, order matters

    For example, given comb=[1, 2, 3], there are these possibilities:
    1. [1, 2, 3]
    2. [1, 3, 2]
    3. [2, 1, 3]
    4. [2, 3, 1]
    5. [3, 1, 2]
    6. [3, 2, 1]
    Assuming each value inside is unique, we'd get len(comb)! (factorial) as
    the number of possibilities. As shown above, there are 6 possibilities with
    3 unique integers.

    Let's imagine a case where some values are repeated. For example,
    comb=[1, 2, 2]. Here are the possibilities:
    1. [1, 2, 2]
    2. [2, 1, 2]
    3. [2, 2, 1]

    Since there are two 2's in this combination, we'd get (3 choose 2) * 1
    since there's only 1 number left after using up the 2s. This gives us

    (3 choose 2) = 3! / (2! * (3-2)!) = 3! / 2! = 3 * 2 * 1 / (2 * 1) = 3

    As a result, we'd get 3 * 1 = 3, matching the number of possibilities. The
    reason why this works is because imagine we only have (3 choose 2). The
    elements that are empty compose of a subarray that can once again be
    recalculated, leading to a multiplication since we are combining the
    possibilities of the choose and the subarray.

    Let's imagine the case where we had multiple integers that has repeats in
    the combination array. Let's imagine the example [1, 2, 2, 3, 3]. Here are
    the possibilities.
    1. [1, 2, 2, 3, 3]
    2. [1, 2, 3, 2, 3]
    3. [1, 2, 3, 3, 2]
    4. [1, 3, 2, 2, 3]
    5. [1, 3, 2, 3, 2]
    6. [1, 3, 3, 2, 2]
    7. [2, 1, 2, 3, 3]
    8. [2, 1, 3, 2, 3]
    9. [2, 1, 3, 3, 2]
    10. [3, 1, 2, 2, 3]
    11. [3, 1, 2, 3, 2]
    12. [3, 1, 3, 2, 2]
    13. [2, 2, 1, 3, 3]
    14. [2, 3, 1, 2, 3]
    15. [2, 3, 1, 3, 2]
    16. [3, 2, 1, 2, 3]
    17. [3, 2, 1, 3, 2]
    18. [3, 3, 1, 2, 2]
    19. [2, 2, 3, 1, 3]
    20. [2, 3, 2, 1, 3]
    21. [2, 3, 3, 1, 2]
    22. [3, 2, 2, 1, 3]
    23. [3, 2, 3, 1, 2]
    24. [3, 3, 2, 1, 2]
    25. [2, 2, 3, 3, 1]
    26. [2, 3, 2, 3, 1]
    27. [2, 3, 3, 2, 1]
    28. [3, 2, 2, 3, 1]
    29. [3, 2, 3, 2, 1]
    30. [3, 3, 2, 2, 1]

    In order to get this list, we can calculate (5 choose 1), decrement 5 by
    1, and repeat this for the next element. Let's try some code
    """
    # Create a map of the count of each integer
    numberMap = defaultdict(int)
    for num in comb:
        numberMap[num] += 1

    # we will use this as the multiplier. Base case as 1 for 1 combination
    product = 1
    length = len(comb)

    for key in numberMap:
        # This is a choose function
        product *= fact(length) / (fact(numberMap[key]) * fact(length -
            numberMap[key]))
        length -= numberMap[key]
    return product

# Helper factorial function
def fact(n):
    if n <= 1:
        return 1

    return n * fact(n-1)

def main():
    # print num_combinations([1, 2, 2, 3, 3])
    print solve([1], 7)
    print solve([2], 7)
    print solve([7], 7)
    print solve([1, 2, 3], 7)

if __name__ == "__main__":
    main()
