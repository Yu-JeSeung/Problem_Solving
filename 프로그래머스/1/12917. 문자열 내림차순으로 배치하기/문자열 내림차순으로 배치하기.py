def solution(s):
    answer = ''
    new_list = sorted(s,reverse=True)
    answer = "".join(new_list)
    return answer