def solution(arr1, arr2):
    answer = []
    for i in range(len(arr1)):
        list_1 = []
        for j in range(len(arr1[i])):
            list_1.append(arr1[i][j]+arr2[i][j])
        answer.append(list_1)
    return answer