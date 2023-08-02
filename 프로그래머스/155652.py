from string import ascii_lowercase

def solution(s, skip, index):
    answer = list(ascii_lowercase)
    set1 = set(answer)
    set2 = set(skip)
    answer = list(set1 - set2)
    answer.sort()
    
    result = []
    
    for i in range(len(s)):
        find_index = answer.index(s[i])
        find_index += index
        find_index %= len(answer)
        
        result.append(answer[find_index])
    
    return "".join(result)