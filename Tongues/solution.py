def tongues(code):
    vowels = "uoeyia" * 2
    constants = "fmlrstqjvpgwcdhnzxkb" * 2

    result = ""
    for c in code:
        orig = c
        pos = vowels.find(c.lower(), 0)
        if pos != -1:
            ans = vowels[pos+3]
            if orig.isupper():
                ans = ans.upper()
            result += ans
        else:
            pos = constants.find(c.lower(), 0)
            if pos != -1:
                ans = constants[pos+10]
                if orig.isupper():
                    ans = ans.upper()
                result += ans
            else:
                result += orig

    return result
