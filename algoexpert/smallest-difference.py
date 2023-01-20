def smallestDifference(arrayOne, arrayTwo):
    smallest_difference = float('inf')
    pair = []
    arrayOne.sort()
    arrayTwo.sort()
    x, y = 0, 0
    while x < len(arrayOne) and y < len(arrayTwo):
        one = arrayOne[x]
        two = arrayTwo[y]

        current_difference = abs(one - two)
        
        if current_difference < smallest_difference:
            smallest_difference = current_difference
            pair = [one, two]
        if one < two:
            x += 1
        else:
            y += 1
    return pair
