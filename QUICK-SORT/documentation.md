# Quick Sort Algorithm ⚡
This folder contains the implementation of the Quick Sort algorithm, an efficient divide-and-conquer sorting method.

## Description
Quick Sort selects a "pivot" element and partitions the list such that all elements smaller than the pivot come before it, and all elements larger come after. It then recursively sorts the partitions.

### Features of This Implementation
* In-Place Sorting: Does not require additional memory.
* Comparison-Based: Partitions based on comparisons with the pivot.

### Quick Sort Workflow 🚀
1. Select a pivot element from the list.
2. Partition the list around the pivot.
3. Recursively apply the same process to the sub-lists.

### Complexity ⏱️
* Time Complexity:
  * Best Case: O(n log n) (When the pivot divides the list evenly).
  * Average Case: O(n log n)
  * Worst Case: O(n²) (When the pivot is the smallest or largest element repeatedly).
* Space Complexity: O(log n) (For recursive stack space).

### Advantages and Disadvantages ⚖️
#### Advantages:
* Fast for most datasets due to its O(n log n) average case.
* In-place sorting reduces memory usage.

#### Disadvantages:
* Worst-case time complexity of O(n²).
* Not stable by default, which means equal elements' relative order may not be preserved.

### When to Use Quick Sort? 📌
Quick Sort is ideal when you need a fast, in-place sorting algorithm and can afford the possibility of a worst-case scenario.

### Conclusion 📝
Quick Sort is one of the fastest general-purpose sorting algorithms, with an average time complexity of O(n log n), but it can degrade to O(n²) in some cases if not optimized.