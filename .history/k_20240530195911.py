def first_time(arr,k):
    for i in range(len(arr)):
        if arr[i]== k:
            return i +1
        else:
            return -1
        
        