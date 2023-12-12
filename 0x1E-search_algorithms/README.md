# Project Readme: Search Algorithms

## Overview
This project implements various search algorithms in C, specifically linear search and binary search. Additionally, it includes analyses of time and space complexities for these algorithms.

## Files and Directories

### 0x1E-search_algorithms
The main project directory containing the following files:

1. **0-linear.c**
   - Implements the Linear search algorithm.
   - Prototype: `int linear_search(int *array, size_t size, int value);`
   - Example usage in `0-main.c`.

2. **1-binary.c**
   - Implements the Binary search algorithm.
   - Prototype: `int binary_search(int *array, size_t size, int value);`
   - Example usage in `1-main.c`.

3. **2-O**
   - Answer to the question: What is the time complexity (worst case) of a linear search in an array of size n?

4. **3-O**
   - Answer to the question: What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

5. **4-O**
   - Answer to the question: What is the time complexity (worst case) of a binary search in an array of size n?

6. **5-O**
   - Answer to the question: What is the space complexity (worst case) of a binary search in an array of size n?

7. **6-O**
   - Answer to the question: What is the space complexity of the `allocate_map` function/algorithm?

## How to Compile and Run
The provided examples demonstrate how to compile and run the algorithms.

### Linear Search
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
./0-linear
```

### Binary Search
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary
./1-binary
```

## Repository Information
- **GitHub repository:** [alx-low_level_programming](https://github.com/buya25/alx-low_level_programming)
- **Directory:** 0x1E-search_algorithms

Feel free to explore and use these algorithms as a reference for search-related tasks. If you have any questions or improvements, please contribute to the repository.
