n = int(input())

pairs = [tuple(map(int, input().split()))for _ in range(n)]

board = [[0] * 100 for _ in range(100)]

for i in pairs:
  for x in range(i[0],i[0]+10):
    for y in range(i[1], i[1]+10):
      board[x][y] = 1

result = sum(sum(row) for row in board)
print(result)