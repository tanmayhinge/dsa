# Tip: You can use the type(element) function to check whether an item
# is a list or an integer.
def productSum(array, depth = 1):
    result = 0
    for i in array:

        if isinstance(i, list):
            result += productSum(i, depth+1)
        
        else:
            result += i

    return depth * result