# Counting Sort Algorithm 🔢
This project contains the implementation of the Counting Sort algorithm, a non-comparative sorting algorithm that sorts elements by counting the occurrences of each value.

## Description
Counting Sort works by counting the number of occurrences of each unique element in the input, and then using this information to place the elements in the correct sorted order. It is suitable for sorting integers or categorical data where the range of input values is known.

### Features of This Implementation
* Non-Comparative Sorting: Counting Sort doesn't compare elements directly; instead, it relies on counting occurrences.
* Efficient for Limited Range: It works best when the range of input values is not significantly larger than the number of elements to sort.

### Counting Sort Workflow 🚀
1. Count the Frequency:
   * Count the number of occurrences for each element in the input array and store it in a count array.
2. Calculate Cumulative Counts:
   * Update the count array such that each element at index `i` contains the sum of the counts of all elements before it, to determine the correct position for each element.
3. Place Elements in Sorted Order:
   * Traverse the input array in reverse order and place each element in its correct position based on the count array.

### Complexity ⏱️
* Time Complexity:
  * Best Case: O(n + k)
  * Average Case: O(n + k)
  * Worst Case: O(n + k)
  * Where `n` is the number of elements in the array, and `k` is the range of input values.
* Space Complexity: O(n + k) (Requires extra memory for the count array).

### Advantages and Disadvantages ⚖️
#### Advantages:
* Linear Time Complexity: Performs in O(n + k) time, making it efficient for small ranges.
* Stable Sort: Counting Sort preserves the relative order of equal elements.

#### Disadvantages:
* Requires Extra Memory: Needs additional space proportional to the range of input values.
* Limited to Integers or Categorical Data: Suitable only for non-negative integers or data that can be mapped to a range.

### When to Use Counting Sort? 📌
Counting Sort is ideal for sorting datasets with a small range of possible values or for categorical data. It is also useful when stability is required, and the extra memory usage is not an issue.

### Conclusion 📝
Counting Sort is a fast and stable sorting algorithm for scenarios where the input range is limited, but it is not suitable for datasets with large ranges or when memory efficiency is crucial.
