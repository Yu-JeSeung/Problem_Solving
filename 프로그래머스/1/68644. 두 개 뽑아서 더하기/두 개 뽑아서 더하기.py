def solution(numbers):
    answer = []
    length = len(numbers)
    for i in range(length):
        for j in range(i+1,length):
            answer.append(numbers[i]+numbers[j])
    answer = list(set(answer))
    answer.sort()
    return answer