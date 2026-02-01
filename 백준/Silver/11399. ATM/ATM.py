import sys
input = sys.stdin.readline

n = int(input())
time = list(map(int, input().split()))
  
time.sort()

lative = 0
total = 0

for t in time:
  lative += t
  total += lative

print(total)
  