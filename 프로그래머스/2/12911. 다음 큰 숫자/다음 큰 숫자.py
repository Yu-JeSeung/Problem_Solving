def trans_bin(value):
    trans_n = bin(value)
    trans_n = trans_n[2:]
    count_one = trans_n.count('1')
    return count_one

def solution(n):
    answer = 0
    count_n = trans_bin(n)
    find_that = n + 1
    
    while True:
        change_that = trans_bin(find_that)
        if change_that == count_n:
            break
        find_that += 1
    answer = find_that
    
    return answer