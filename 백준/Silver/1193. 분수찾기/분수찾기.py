import sys

input = sys.stdin.readline

n = int(input().strip())

count = 1
sum_c = 0

while sum_c < n:
    sum_c += count
    count += 1
count -= 1

deviation = n - (sum_c - count)

if count % 2 == 1:
    check_x = count - deviation + 1
    check_y = deviation
else:
    check_x = deviation
    check_y = count - deviation + 1

print(f"{check_x}/{check_y}")