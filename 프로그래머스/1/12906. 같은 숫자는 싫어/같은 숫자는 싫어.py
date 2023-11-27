def solution(arr):
    answer = []
    answer.append(arr[0])
    a = 0
    for i in arr:
        if i == answer[a]:
            continue
        else:
            answer.append(i)
        a += 1
    return answer