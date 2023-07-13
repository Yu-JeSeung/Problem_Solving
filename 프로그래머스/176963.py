def solution(name, yearning, photo):
    answer = []
    # 두개의 리스트를 하나의 딕셔너리로 만들기
    sum_dict = {name:value for name, value in zip(name,yearning)}
    
    # 2중 for 문 사용해서 photo 안의 내용 sum_dict에 value 만큼 더해주고
    # answer 에 추가하기
    for i in range(len(photo)):
        sum = int(0)
        for j in range(len(photo[i])):
            if sum_dict.get(photo[i][j]) == None:continue
            sum = sum + sum_dict.get(photo[i][j])
        answer.append(sum)
        
    return answer