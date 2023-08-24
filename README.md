# Insertion-Sort-Complexity-Reduction
Insertion Sort with Binary Search Tree 

# Insertion Sort vs. Insertion Sort with Binary Search Optimization

This repository showcases the comparison between the standard Insertion Sort algorithm and an enhanced version of it that utilizes a binary search optimization for faster insertion.

## Introduction

Insertion Sort is a simple sorting algorithm that builds the final sorted array one element at a time. While it's not known for its efficiency on larger datasets, the basic algorithm serves as a foundation for the optimized version we're presenting.

## Standard Insertion Sort

The standard Insertion Sort algorithm has a time complexity of O(n^2) in both average and worst cases. It involves iterating through the unsorted portion of the array and inserting each element into its correct position in the sorted portion, shifting elements as needed.

## Insertion Sort with Binary Search Optimization

The enhanced version of Insertion Sort presented here combines the core idea of the standard algorithm with a binary search optimization. In this approach, instead of directly shifting elements during insertion, a binary search is employed to determine the correct position for an element, significantly reducing the number of comparisons and shifts.

## Complexity Comparison

- **Standard Insertion Sort:**
  - Average-case time complexity: O(n^2)
  - Worst-case time complexity: O(n^2)

- **Insertion Sort with Binary Search Optimization:**
  - Average-case time complexity for insertion: O(log n)
  - Worst-case time complexity for insertion: O(n)

It's important to note that the binary search optimization enhances the average-case performance of the insertion step, resulting in a reduced time complexity. However, the worst-case time complexity remains comparable to the standard Insertion Sort.

# Contributions
Contributions are welcome! If you have ideas for further optimizations or ways to improve this comparison, feel free to open issues or submit pull requests.

## Usage

1. Clone this repository:

git clone https://github.com/AnshulMishra2003/Insertion-Sort-Complexity-Reduction.git

 # License
This project is licensed under the MIT License - see the LICENSE file for details

