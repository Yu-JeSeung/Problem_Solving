import sys

def solve(n):
  for five_count in range(n//5, -1, -1):
    flag = n - (five_count * 5)

    if flag % 3 == 0:
      three_count = flag // 3
      return five_count + three_count
  return -1

n = int(sys.stdin.readline())
print(solve(n))      