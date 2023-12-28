def solution(s1, s2):
    answer = 0
    s_s1 = set(s1)
    s_s2 = set(s2)
    answer = len(s_s1.intersection(s_s2))
    return answer