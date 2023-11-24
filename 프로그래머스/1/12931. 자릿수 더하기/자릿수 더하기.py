def solution(n):
    answer = 0
    list_1 = []
    while n>0:
        list_1.append(n%10)
        n = int(n/10)
    answer = sum(list_1)

    return answer
