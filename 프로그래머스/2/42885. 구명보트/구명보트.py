from collections import deque

def solution(people, limit):
    people.sort()
    people = deque(people)
    answer = 0
    
    while people:
        a = people.pop()
        try:
            if people[0] + a <= limit:
                people.popleft()
            answer += 1    
        except :
            answer += 1
            
    return answer
