# Merge Sort Algorithm 🔀
This folder contains the implementation of the Merge Sort algorithm, a divide-and-conquer sorting method that splits the array into smaller sub-arrays and merges them after sorting.

## Description
Merge Sort divides the list into two halves until each half is of size one, then it merges them while sorting in the process. It ensures that each merged list is sorted.

### Features of This Implementation
* Recursive Sorting: Uses recursion to divide the list into smaller sub-arrays.
* Stable Sort: The relative order of equal elements is preserved.

### Merge Sort Workflow 🚀
1. Recursively divide the list into halves until each sub-array has only one element.
2. Merge the sub-arrays back while sorting the elements.

### Complexity ⏱️
* Time Complexity:
  * Best Case: O(n log n)
  * Average Case: O(n log n)
  * Worst Case: O(n log n)
* Space Complexity: O(n) (Requires extra memory for merging).

### Advantages and Disadvantages ⚖️
#### Advantages:
* Consistent performance with O(n log n) complexity.
* Stable and efficient for sorting linked lists.

#### Disadvantages:
* Requires additional memory proportional to the size of the input array.
* Slower than in-place algorithms for smaller datasets.

### When to Use Merge Sort? 📌
Merge Sort is suitable for situations where stability is crucial, or when sorting linked lists or large datasets.

### Conclusion 📝
Merge Sort is a reliable sorting algorithm with consistent O(n log n) complexity, but it requires additional memory for its merge process.