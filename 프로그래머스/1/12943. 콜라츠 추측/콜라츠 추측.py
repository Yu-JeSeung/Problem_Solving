def solution(num):
    answer = 0
    cnt_1 = 0
    if num == 1:
        answer = 0
    else:
        while cnt_1 < 500:
            if num == 1:
                answer = cnt_1
                break
            else:
                if num % 2 == 0:
                    num = int(num / 2)
                else:
                    num = num * 3 + 1
            cnt_1 += 1
        
    if cnt_1 == 500:
        answer = -1
    return answer