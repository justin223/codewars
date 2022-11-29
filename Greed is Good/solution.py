
def score(dice):
    count = [0, 0, 0, 0, 0, 0]
    score_arr = [1000, 200, 300, 400, 500, 600]
    bonus = [100, 0, 0, 0, 50, 0]
    for d in dice:
        count[d-1] += 1

    total = 0
    for idx, v in enumerate(count):
        total += (score_arr[idx] if v >= 3 else 0) + bonus[idx] * (v % 3)

    return total
