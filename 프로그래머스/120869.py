def solution(spell, dic):
    answer = 0
    new_list = []
    
    for i in dic:
        new_list.append(list(i))
    
    flag = 0
    for k in new_list:
        for i in spell:
            if i not in k:
                flag = 1
                break
            else: flag = 0
        if flag == 0:
            answer = 1
            flag=0
            break
        else: 
            answer = 2
        
    return answer