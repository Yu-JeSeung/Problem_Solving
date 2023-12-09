def solution(s):
    answer = ''
    s_list = list(s.split(' '))
    if s[0].isalpha():
        answer = ' '.join([word.capitalize() for word in s_list])
    else:
        answer = ' '.join([word.capitalize() for word in s_list])
    return answer