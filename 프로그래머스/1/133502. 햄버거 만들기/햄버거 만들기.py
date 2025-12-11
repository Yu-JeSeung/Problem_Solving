def solution(ingredient):
    answer = 0
    value = []
    
    for i in ingredient:
        value.append(i)
        if value[-4:] == [1,2,3,1]:
            answer += 1
            for _ in range(4):
                value.pop()
    
    return answer