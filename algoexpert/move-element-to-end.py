def moveElementToEnd(array, toMove):
    pL = 0
    pR = len(array)-1

    while pL < pR:
        while pL < pR and array[pR] == toMove:
            pR -= 1
        if array[pL] == toMove:
            array[pL], array[pR] = array[pR], array[pL]
        
        pL += 1

    return array
