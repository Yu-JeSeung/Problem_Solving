def solution(arr):
    if len(arr) == 0 :
        arr.append(-1)
    else:
        arr.remove(min(arr))
    return arr
    