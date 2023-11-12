def solution(left, right):
    result = []
    for i in range(left, right + 1):
        count = 0
        for j in range(1, i + 1):
            if i % j == 0:
                count += 1
        result.append(count)

    total = 0
    count = left

    for i in result:
        if i % 2 == 0:
            total += count
        else:
            total -= count
        count += 1

    return total
