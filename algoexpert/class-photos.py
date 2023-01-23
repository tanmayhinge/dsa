def classPhotos(redShirtHeights, blueShirtHeights):
    redShirtHeights.sort()
    blueShirtHeights.sort()

    if blueShirtHeights[0] >= redShirtHeights[0]:
        for i in range(len(redShirtHeights)):
            if blueShirtHeights[i] <= redShirtHeights[i]:
                return False
    elif blueShirtHeights[0] <= redShirtHeights[0]:
        for i in range(len(redShirtHeights)):
            if blueShirtHeights[i] >= redShirtHeights[i]:
                return False        
    return True
