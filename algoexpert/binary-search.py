def binarySearch(array, target):
    low = 0
    high = len(array) - 1

    while low <= high:
        mid = (low + high)//2
        if array[mid] < target:
            low = mid + 1
        elif array[mid] > target:
            high = mid -1
        elif array[mid] == target:
            return mid
            
    return -1