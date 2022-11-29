def solution(s):
    ss = s
    if len(ss) % 2:
        ss += "_"
    return [ss[i:i+2] for i in range(0, len(ss), 2)]
