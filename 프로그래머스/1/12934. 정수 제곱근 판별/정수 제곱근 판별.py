
def solution(n):
    answer = int(pow(n,(1/2)))
    if answer**2 == n:
        if answer == 1:
            answer = -1
        else:
            answer = pow(answer + 1,2)
    else:
        answer = -1      
    if n == 1:
        answer = pow(1+1,2)
    return answer