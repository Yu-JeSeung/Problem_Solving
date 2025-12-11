def solution(babbling):
    answer = 0
    able = ["aya", "ye", "woo", "ma"]
    
    for i in babbling:
        for j in able:
            if j*2 in i:
                break
            else:
                i = i.replace(j,' ')
        
        if i.isspace():
            answer += 1
    
        
    return answer