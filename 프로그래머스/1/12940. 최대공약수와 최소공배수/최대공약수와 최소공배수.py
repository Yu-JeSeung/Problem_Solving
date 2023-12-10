def solution(n, m):
    answer = []
    start = 1
    list_1 = []
    list_2 = []
    while start <= m:
        if int(n % start) == 0 and int(m % start) == 0:
            list_1.append(start)
        start += 1
    start = m
    flag = 1
    while flag:
        if start % n == 0 and start % m == 0:
            list_2.append(start)
            flag = 0
        start += 1
    answer.append(max(list_1))
    answer.append(min(list_2))
    return answer