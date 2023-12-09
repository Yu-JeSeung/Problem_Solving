def solution(s):
    answer = ''
    s_list = list(s.split(' '))
    
    answer = ' '.join([word.capitalize() for word in s_list])
    return answer