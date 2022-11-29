def get_count(sentence):
    count = 0
    vowels = list("aeiou")
    for c in sentence:
        if c in vowels:
            count += 1
    return count
