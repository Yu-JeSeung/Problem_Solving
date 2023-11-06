def solution(numbers):
    answer=[]
    sum=0
    for i in range(10):
        answer.append(i)
    
    # list1에만 있는 원소들을 구하는 차집합
    difference = list(set(answer) - set(numbers))
    for i in difference:
        sum += i
        
    return sum