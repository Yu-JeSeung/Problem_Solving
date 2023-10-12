def solution(wallpaper):
    a=[]
    b=0
    answer = []
    d={} # #의 위치를 저장할 딕셔너리
    for y, row in enumerate(wallpaper):
        for x, char in enumerate(row):
            if char == '#':
                a.append(y)
                
                if y in d:
                    break
                else:
                    d.update({y:x})
    for y, row in enumerate(wallpaper):
        for x, char in enumerate(row):
            if char == '#':
                if b < x+1:
                    b = x+1
    a.sort()
    # 첫번째 값
    answer.append(a[0])
    
    # 두번째 값
    answer.append(min(d.values()))
    
    # 세번째 값
    answer.append(a[-1]+1)

    # 마지막 값
    answer.append(b)
    return answer