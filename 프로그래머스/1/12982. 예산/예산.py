def solution(d, budget):
    answer = 0
    target = 0
    d.sort()
    
    while d:
        target += d.pop(0)
        if target > budget:
            return answer
        else:
            answer += 1
    
    return answer