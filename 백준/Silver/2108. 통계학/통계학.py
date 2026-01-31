from collections import Counter
import sys

n = int(input())
number = []
for _ in range(n):
  c = int(sys.stdin.readline())
  number.append(c)
result = []

# 평균
avg = sum(number) / n
result.append(int(avg + 0.5) if avg >= 0 else int(avg - 0.5))

# 중앙값
number.sort()
result.append(number[int(n/2)])

# 최빈값
count = Counter(number)
count = count.most_common()
max_freq = count[0][1]
find = [v for v,f in count if f == max_freq]
find.sort()

if len(find) == 1:
  result.append(find[0])
else:
  result.append(find[1])

# 범위
max_v = number[len(number)-1]
min_v = number[0]
result.append(max_v-min_v)

for i in result:
  print(i)