def spiralTravevrsal(array):

    result = []
    rowStart, rowEnd = 0, len(array) - 1
    colStart, colEnd = 0, len(array[0]) - 1

    while rowStart <= rowEnd and colStart <= colEnd:
        
        for col in range(colStart, colEnd + 1):
            result.append(array[rowStart][col])
        
        for row in range(rowStart + 1, rowEnd + 1):
            result.append(array[row][colEnd])

        for col in reversed(range(colStart, colEnd)):
            result.append(array[rowEnd][col])
        
        for row in reversed(range(rowStart + 1, rowEnd)):
            result.append(array[row][colStart])

        rowStart += 1
        rowEnd -= 1
        colStart += 1
        colEnd -= 1

    return result