# Selection Sort Algorithm 🔍
This folder contains the implementation of the Selection Sort algorithm, which selects the smallest element repeatedly to sort the list.

## Description
Selection Sort divides the list into a sorted and an unsorted part, finding the minimum value from the unsorted part and placing it at the end of the sorted part.

### Features of This Implementation
* In-Place Sorting: Does not require additional memory.
* Comparison-Based: Sorts elements by selecting the smallest one at each step.

### Selection Sort Workflow 🚀
1. Find the minimum element in the unsorted part of the list.
2. Swap it with the first element in the unsorted part.
3. Move the boundary between the sorted and unsorted parts and repeat.

### Complexity ⏱️
* Time Complexity:
  * Best Case: O(n²)
  * Average Case: O(n²)
  * Worst Case: O(n²)
* Space Complexity: O(1)

### Advantages and Disadvantages ⚖️
#### Advantages:
* Simple and easy to implement.
* Suitable for small datasets.

#### Disadvantages:
* Inefficient for large datasets due to its O(n²) time complexity.
* Requires many comparisons even if the list is partially sorted.

### When to Use Selection Sort? 📌
Selection Sort is ideal for small datasets or situations where simplicity is more important than performance.

### Conclusion 📝
Selection Sort is easy to understand but not efficient for large datasets, as it always has a quadratic time complexity.