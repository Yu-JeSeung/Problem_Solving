def solution(k, score):
    answer = []
    list_1 = []
    for i in range(len(score)):
        list_1.append(score[i])
        list_1.sort()
        if i < k:
            answer.append(list_1[0])
        else:
            answer.append(list_1[len(list_1)-k])
    
    
    return answer