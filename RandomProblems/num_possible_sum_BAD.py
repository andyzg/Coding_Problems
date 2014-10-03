"""
    This solution sucks
    let's redo it in p2.py
"""
"""
C = {1, 2, 2, 3, 4, 5}
Sum = 5

Subsets:
  {1, 2, 2}
  {1, 4}
  {2, 3}
"""
from sets import Set

def main():
  print solve([1, 2, 2, 3, 4, 5], 5)

def solve(numbers, total):
  numbers = sorted(numbers)
  current_list = []
  answer = Set()
  get_sum(numbers, total, answer, current_list)
  return answer

def get_sum(numbers, total, answer, current_list):
  if total == 0:
    answer.add(Set(current_list))
    return
  elif total < 0:
    return

  for i in range(0, len(numbers)):
    current_list.append(numbers[i])
    get_sum(numbers[i+1:], total - numbers[i], answer, current_list)
    current_list.pop()
  return


if __name__ == "__main__":
  main()
