import sys
input = sys.stdin.readline

n,m = map(int, input().split())
board = [input().strip() for _ in range(n)]

min_count = 64

for i in range(n-7):
    for j in range(m-7):
        countA = 0
        countB = 0
        for x in range(8):
            for y in range(8):
                if (x+y) % 2 == 0:
                    if board[i+x][j+y] != 'W':
                        countA += 1
                    if board[i+x][j+y] != 'B':
                        countB += 1
                else:
                    if board[i+x][j+y] != 'B':
                        countA += 1
                    if board[i+x][j+y] != 'W':
                        countB += 1
        min_count = min(min_count, countA, countB)
print(min_count)