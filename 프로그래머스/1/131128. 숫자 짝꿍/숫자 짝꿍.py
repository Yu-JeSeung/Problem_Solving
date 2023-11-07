def solution(X, Y):
    answer = ''
    ch_x = list(X)
    count_l = []
    ch_y = list(Y)
    
    for i in range(10,-1,-1):
        answer += str(i) * min(ch_y.count(str(i)),ch_x.count(str(i)))
    str(list(answer).sort(reverse = True))
    if len(answer) < 1 : answer = "-1"
    if answer[0] == '0':
        answer = "0"
    
    return answer

