import sys
input = sys.stdin.readline

n, k = map(int, input().split())
coins = [int(input().strip()) for _ in range(n)]

result = 0

for i in range(n-1, -1, -1):
  if k >= coins[i]:
    result += k // coins[i]
    k = k % coins[i]

  if k == 0:
    break

print(result)