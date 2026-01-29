import sys

input = sys.stdin.readline
n = int(input().strip())
words = [input().strip() for _ in range(n)]
word_count = set()
result = 0

for i in range(n):
    check_word = ''
    is_group = True
    for j in words[i]:
        if check_word == j:
            continue
        else:
            check_word = j
            if j in word_count:
                is_group = False
                break
            word_count.add(j)
    word_count.clear()
    if is_group:
        result += 1

print(result)