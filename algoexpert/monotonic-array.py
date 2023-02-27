def isMonotonic(array):
    x = True
    y = True
    for i in range (len(array)-1):
        x = x and array[i] >= array[i+1]
        y = y and array[i]<= array[i+1]
    
    return x or y