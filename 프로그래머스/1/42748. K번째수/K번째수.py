def solution(array, commands):
    answer = []
    for com in commands:
        i, j, k = com
        tmp = array[i-1:j]
        tmp.sort()
        answer.append(tmp[k-1])
    return answer