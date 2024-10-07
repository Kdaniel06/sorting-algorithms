# Radix Sort Algorithm 🎯
This folder contains the implementation of the Radix Sort algorithm, a non-comparative sorting algorithm that sorts numbers digit by digit.

## Description
Radix Sort sorts elements by processing individual digits. It starts from the least significant digit and progresses to the most significant digit, using a stable subroutine like Counting Sort.

### Features of This Implementation
* Non-Comparative Sorting: Sorts based on digit values.
* Suitable for Numbers: Efficient for sorting large sets of integers.

### Radix Sort Workflow 🚀
1. Sort the elements based on the least significant digit.
2. Move to the next digit and repeat until all digits are processed.

### Complexity ⏱️
* Time Complexity:
  * Best Case: O(nk) (Where `k` is the number of digits in the largest number).
  * Average Case: O(nk)
  * Worst Case: O(nk)
* Space Complexity: O(n + k)

### Advantages and Disadvantages ⚖️
#### Advantages:
* More efficient than comparison-based algorithms for large numbers or fixed-length keys.
* Stable sorting method.

#### Disadvantages:
* Requires additional memory for storing count information.
* Limited to specific data types (typically integers or strings).

### When to Use Radix Sort? 📌
Radix Sort is ideal when sorting large numbers or datasets with keys that can be processed digit by digit, especially when stability is required.

### Conclusion 📝
Radix Sort is an efficient non-comparative sorting algorithm suitable for sorting large numbers, but it requires additional memory and is not as flexible as comparison-based algorithms.