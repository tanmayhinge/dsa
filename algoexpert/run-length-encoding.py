def runLengthEncoding(string):
    length = 1
    retList = []
    for i in range(1, len(string)):
        if string[i] != string[i-1] or length == 9:
            retList.append(str(length)+string[i-1])
            length = 0

        length += 1
    
    retList.append(str(length))
    retList.append(string[len(string)-1])
            
    return "".join(retList)