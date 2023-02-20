def semordnilap(words):
    ret = []
    tempRet = []
    mySet = set(words)

    for i in range(len(words)):
        if(words[i][::-1] in mySet and words[i][::-1] != words[i]):
            ret.append([words[i],words[i][::-1]])
            mySet.remove(words[i])

    return ret
