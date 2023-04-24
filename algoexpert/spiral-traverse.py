# O(n^2) solution

def spiralTraverse(array):
    ret = []
    while array:
        ret += array.pop(0)
        array = list(zip(*array))[::-1]
    return ret