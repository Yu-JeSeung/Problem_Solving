def solution(n):
    answer = 0
    third = []
    while(n):
        third.append(n % 3) 
        n = int(n / 3)
    
    for i in range(len(third)):
        value = third.pop()
        if value == 0:continue
        answer += (3**i)*value
        
    return answer