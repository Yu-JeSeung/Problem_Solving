def solution(n, m, section):
    answer = 0
    first = section[0] + m
    count = 0
    for i in range(len(section)):
        if first > section[i]:
            continue
        elif first <= section[i]:
            first = section[i] + m
        answer += 1
    return answer+1