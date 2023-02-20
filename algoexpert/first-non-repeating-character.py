def firstNonRepeatingCharacter(string):
    countMap = {}

    for i in string:
        if i not in countMap:
            countMap[i] = 1
        else:
            countMap[i] += 1

    for i in range(len(string)):
        if countMap[string[i]] == 1:
            return i

    return -1