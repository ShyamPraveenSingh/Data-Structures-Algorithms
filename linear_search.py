
def linearSearch(arr, n, x):
    for i in range(0, n):
        if (arr[i] == x):
            return i
    return -1


arr = [1,2,3,4,5]
x = 5
n = len(arr)
result = linearSearch(arr, n, x)
if (result == -1):
    print("Not Found!")
else:
    print("Element is present at index", result)