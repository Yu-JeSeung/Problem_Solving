def solution(a, b, n):
    answer = 0
    
    while n >= a:
        target = n//a*b
        n = int(n%a) + target
        answer += target
        
    return answer