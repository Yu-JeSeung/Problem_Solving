def solution(n):
    answer = 0
    num1 = 1
    while num1 <= n:
        if n % num1 == 0:
            answer += num1
        num1 += 1
    return answer