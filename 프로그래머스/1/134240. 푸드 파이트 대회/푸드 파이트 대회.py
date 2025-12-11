def solution(food):
    answer = ''
    answer2 = ""
    for i in range(1,len(food)):
        value = food[i] // 2
        for j in range(value):
            answer += str(i)
    
    answer2 += ''.join(reversed(answer))

    return answer + '0' + answer2