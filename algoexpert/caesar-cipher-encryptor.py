def caesarCipherEncryptor(s, key):
    newKey = key % 26
    newStr = []
    for i in s:
        newStr.append(getNewLetter(i, newKey))

    return(''.join(newStr))

def getNewLetter(i, key):
    newLetterCode = ord(i)+key
    return chr(newLetterCode) if newLetterCode <= 122 else chr(96 + newLetterCode % 122)


caesarCipherEncryptor("abc", 1)