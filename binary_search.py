

def binarySearch(arr, l, u, x):
    
    if (u >= l):
        mid = l + (u - l) // 2
        if(arr[mid] == x):
            return mid
            
        elif (arr[mid] > x):
            return binarySearch(arr, l, mid-1, x)

        else:
            return binarySearch(arr, mid+1, u, x)

    else:
        return -1

arr = [1,2,3,4,5]
x = 3
l = 0
result = binarySearch(arr, l, len(arr)-1, x)
if (result != -1):
    print("The index of the searched number is at: %d" % result)
else:
    print("Searched number not found")
