def sum_of_digits(num):
    digits = [int(digit) for digit in str(abs(num))]
    total_sum = sum(digits)
    return total_sum

def solution(x):
    answer = True
    t_sum = sum_of_digits(x)
    if x % t_sum == 0:
        answer = True
    else:
        answer = False
        
    return answer