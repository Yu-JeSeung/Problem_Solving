def solution(s):
    answer = []
    change = 0
    
    while s != '1':
        answer.append(s.count('0'))
        
        s = bin(s.count('1'))[2:]
        
        change += 1
        
    return [change, sum(answer)]
