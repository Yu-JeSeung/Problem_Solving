from math import gcd

def solution(arr):
    answer = 0
    
    for i in range(0,len(arr)-1):
        arr[i+1] = int((arr[i] * arr[i+1]) / gcd(arr[i],arr[i+1]))
        
    answer = arr[-1]
    
    return answer