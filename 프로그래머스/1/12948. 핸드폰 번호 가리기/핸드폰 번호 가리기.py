def solution(phone_number):
    answer = ''
    str_len = len(phone_number)
    for i in range(str_len-4):
        answer+='*'
    
    answer+=phone_number[str_len-4:str_len+2]
    
    return answer