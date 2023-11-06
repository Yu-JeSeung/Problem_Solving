def solution(n):
    min_value=1
    while min_value < n:
        if n % min_value == 1:
            break
        min_value += 1
    return min_value