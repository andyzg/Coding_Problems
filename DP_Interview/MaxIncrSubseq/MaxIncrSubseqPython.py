def main():
  assert solve([0, 1, 2]) == 3
  assert solve([1, 3, 2, 5, 4, 5]) == 13
  assert solve([0]) == 0
  assert solve([0, 1]) == 1
  assert solve([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1]) == 55
  print "Passed all of the tests"

def solve(numbers=[0]):
  previous_index = [-1] * len(numbers)
  max_sum = [0] * len(numbers)
  max_subseq_sum = 0;
  max_sum[0] = numbers[0]
  for i in range(0, len(numbers)):
    for j in range(0, i):
      if numbers[j] < numbers[i] and max_sum[j] + numbers[i] > max_sum[i]:
        previous_index[i] = j
        max_sum[i] = max_sum[j] + numbers[i]
    if max_sum[i] > max_subseq_sum:
      max_subseq_sum = max_sum[i]
  return max_subseq_sum

if __name__ == "__main__":
  main()
