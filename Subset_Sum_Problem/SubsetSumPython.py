def main():
  assert solve(0, [0]) == True
  assert solve(2, [1, 2, 3]) == True
  assert solve(1, [2, 4]) == False
  assert solve(1, [2]) == False
  assert solve(10, [1, 2, 3, 4, 5, 6]) == True
  assert solve(100, [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 44]) == True
  assert solve(100, [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 33]) == False
  assert solve(100, [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 34]) == True
  print "Passed all of the test cases"

def solve(k, weights=[0]):
  memo = {}
  memo[k] = True
  for weight in weights:
    # We can't add values in the hashmap while in the for loop
    numbers = []
    for possibility in memo:
      upper = possibility + weight
      lower = possibility - weight
      if upper == 0 or lower == 0:
        return True
      numbers.append(upper)
      numbers.append(lower)
    for i in numbers:
      memo[i] = True
  return False

if __name__ == "__main__":
  main()
