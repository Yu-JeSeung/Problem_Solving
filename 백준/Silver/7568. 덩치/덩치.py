n = int(input())
pairs = [tuple(map(int, input().split())) for _ in range(n)]

ranks = []

for i in range(n):
    rank = 1
    for j in range(n):
        if pairs[j][0] > pairs[i][0] and pairs[j][1] > pairs[i][1]:
            rank += 1
    ranks.append(rank)

print(' '.join(map(str, ranks)))