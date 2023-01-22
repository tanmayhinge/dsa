def findThreeLargestNumbers(array):
    lar = [float('-inf'), float('-inf'), float('-inf')]

    for i in array:
        if i > lar[2]:
            lar[0] = lar[1]
            lar[1] = lar[2]
            lar[2] = i
        elif i > lar[1]:
            lar[0] = lar[1]
            lar[1] = i
        elif i > lar[0]:
            lar[0] = i
    return lar
            
    
    
