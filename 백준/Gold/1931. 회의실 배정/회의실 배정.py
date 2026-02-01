import sys
input = sys.stdin.readline

n = int(input())
pairs = [tuple(map(int, input().split())) for _ in range(n)]

pairs.sort(key=lambda x: (x[1], x[0]))

count = 1
end_time = pairs[0][1]

for i in range(1, len(pairs)):
    if pairs[i][0] >= end_time:
        count += 1
        end_time = pairs[i][1]

print(count)