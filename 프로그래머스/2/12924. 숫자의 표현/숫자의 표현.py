def calcul(start, n):
    total_sum = 0
    while start > 0:
        total_sum += start
        if total_sum > n:
            return False
        
        if total_sum == n:
            return True
        
        start -= 1
    

def solution(n):
    answer = n
    t_count = 0
    
    while answer > 0:
        flag = calcul(answer, n)
        if flag: 
            t_count += 1
        answer -= 1
    
    return t_count