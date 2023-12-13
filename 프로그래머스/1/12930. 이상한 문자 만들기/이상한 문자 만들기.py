def solution(s):
    answer = ''
    words = s.split(' ')
    
    for word in words:
        for idx, char in enumerate(word):
            if idx % 2 == 0:
                answer += char.upper()
            else:
                answer += char.lower()
        answer += " "
    answer = answer[:-1]
    
    return answer
