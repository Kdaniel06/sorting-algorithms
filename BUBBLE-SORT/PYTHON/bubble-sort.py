"""
Bubble Algorithm Implementation
"""

def bubbleSort(arr):
    n = len(arr) # Lenght of the array from 0
    for i in range(0, n):
        for j in range(0, n-1):

            # Swap if necessary
            if arr[j] > arr[j+1]:
                (arr[j], arr[j+1]) = (arr[j+1], arr[j])
                
    return arr

# Test    
print(f"Bubble algorithm result: {bubbleSort([5,8,6,1,4,10,3,9,2,0])}")
        