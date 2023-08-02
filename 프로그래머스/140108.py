def solution(s):
    answer = 1
    cnt_num1 = 0
    cnt_num2 = 0
    num1_ch = s[0]
    num2_ch = ""
    for i in range(len(s)-1):
        if num1_ch == s[i]:
            cnt_num1 += 1
        if num1_ch != s[i]:
            num2_ch = s[i]
            cnt_num2 += 1
        if cnt_num1 == cnt_num2:
            answer += 1
            if i+1 <= len(s):
                num1_ch = s[i+1]
            num2_ch = ""
    return answer