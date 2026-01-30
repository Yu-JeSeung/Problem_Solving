from collections import deque

n, k = map(int, input().strip().split(' '))

result = []
q = deque(range(1, n+1))

for _ in range(n):
  q.rotate(-(k-1))
  result.append(q.popleft())

print("<" + ", ".join(map(str, result)) + ">")