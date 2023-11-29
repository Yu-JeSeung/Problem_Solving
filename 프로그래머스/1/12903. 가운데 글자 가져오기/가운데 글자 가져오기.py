def solution(s):
    answer = ''
    s_len = len(s)
    center_s = 0
    if s_len % 2 == 0:
        center_s = int(s_len/2 )-1
        answer += s[center_s] + s[center_s+1]
    else:
        center_s = int(s_len/2)
        answer += s[center_s]
    
    return answer