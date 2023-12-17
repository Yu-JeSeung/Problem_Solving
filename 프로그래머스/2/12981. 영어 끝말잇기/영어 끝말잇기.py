def solution(n, words):
    answer = []
    last_word = words[0]
    last_word = last_word[0]
    count_num = 0
    find_who = 0
    check_word = []
    
    for i in words:
        if last_word != i[0] or i in check_word:
            break
        check_word.append(i)
        # print(last_word, i[0])
        count_num += 1
        find_who += 1
        last_word = i[len(i)-1]
        if find_who >= n:
            find_who = 0
    
    if count_num == len(words):
        answer = [0,0]
    else:
        find_that = int(count_num/n)
        find_that_count = find_that
        if find_that >= n:
            find_that_count = int(find_that/n)
        answer = [find_who+1,find_that+1]
    
    return answer