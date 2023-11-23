def solution(n):
    answer = 0
    list_1 = []
    while n > 0:
        list_1.append(int(n % 10))
        n = int(n / 10)
    list_1.sort(reverse=True)  # 내림차순으로 정렬합니다.
    answer = int(''.join(str(x) for x in list_1))

    return answer
