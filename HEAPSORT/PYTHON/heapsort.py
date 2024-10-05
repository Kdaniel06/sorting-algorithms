"""
Heapsort Algorithm Implementation
"""

def heapsort(inputArray):
    n = len(inputArray) - 1 ## n => The maximum lenght of unsorted array
    
    # The main cicle, ends with all the array is covered
    while n > 0:
        # Select the last "node" with sons
        lastFatherPos = (n-1) // 2
        
        ## Work with each father
        while lastFatherPos >= 0:
            largestPos = lastFatherPos
            
            # Get the "sons"
            leftSonPos = 2 * lastFatherPos + 1
            rightSonPos = 2 * lastFatherPos + 2
            
            # Select the maximum number
            if rightSonPos < n and inputArray[largestPos] < inputArray[rightSonPos]:
                largestPos = rightSonPos
            if leftSonPos < n and inputArray[largestPos] < inputArray[leftSonPos]:
                largestPos = leftSonPos
            
            # Swap if necessary
            if largestPos != lastFatherPos:
                (inputArray[lastFatherPos], inputArray[largestPos]) = (inputArray[largestPos], inputArray[lastFatherPos])
                
            # Select the previous father
            lastFatherPos = lastFatherPos -1 
        
        # Swap the root with the last element if necesary    
        if inputArray[0] > inputArray[n]:
            (inputArray[0], inputArray[n]) = (inputArray[n], inputArray[0])
            
        # Cut the max node (Last one)    
        n = n-1
    
    return inputArray
        

# Test    
# print(f"Heapsort algorithm result: {heapsort([5,8,6,1,4,10,3,9,2,0])}")
        
        