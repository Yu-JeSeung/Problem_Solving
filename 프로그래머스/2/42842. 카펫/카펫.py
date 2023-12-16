def solution(brown, yellow):
    answer = []
    total_col = brown + yellow
    
    for i in range(1, int(total_col ** 0.5) + 1):
        if total_col % i == 0:
            width = total_col // i
            height = i
            
            if (width - 2) * (height - 2) == yellow:
                answer =  [width, height]
    
    
    return answer