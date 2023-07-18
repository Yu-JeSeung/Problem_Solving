def solution(t, p):
    size_p = len(p)
    count = 0
    arr = []
    for i in range(len(t)):
        if i+size_p > len(t):continue
        arr.append(t[i:i+size_p])
    for i in range(len(arr)):
        if int(arr[i]) <= int(p):
            count += 1
    return count