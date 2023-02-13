def generateDocument(characters, document):
    
    charMap = {}
    map = {}

    for i in characters:
        if i not in charMap:
            charMap[i] = 0
        else:
            charMap[i] += 1

    for i in document:
        if i not in charMap or (charMap[i] < 0):
            return False
    
        charMap[i] -= 1

    return True
