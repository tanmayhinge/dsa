def tandemBicycle(redShirtSpeeds, blueShirtSpeeds, fastest):
    totalSpeed = 0
    redShirtSpeeds.sort()
    blueShirtSpeeds.sort(reverse = fastest)

    for i in range(len(redShirtSpeeds)):
        totalSpeed += max(redShirtSpeeds[i], blueShirtSpeeds[i])
    return totalSpeed
