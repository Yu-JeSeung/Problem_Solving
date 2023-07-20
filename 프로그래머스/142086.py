def solution(s):
    result = []
    count = 0
    flag = 0
    
    for i in range(len(s)):
        for k in range(i-1,-1,-1):
            count += 1
            if s[i]==s[k]:
                result.append(count)
                flag = 1
                break
        if flag == 0:
            result.append(-1)
        flag = 0
        count = 0
    return result