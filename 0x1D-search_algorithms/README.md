# holbertonschool-low_level_programming
## 0x1D-search_algorithms
### 0-linear.c
This function searches for a value in an array of integers using the [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search).
### 1-binary.c
This function that searches for a valule in a sorted array of integers using the [https://en.wikipedia.org/wiki/Binary_search_algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm).
### 2-O
This file contains the time complexity (worst case) of a linear search in an array of size `n`.
### 3-O
This file contains the space complexity (worst case) of an iterative linear seach algorithm in an array of size `n`.
### 4-O
This file contains the time complexity (worst case) of a binary search in an array of size `n`.
### 5-O
This file contains the space complexity (worst case) of a binary search in an array of size `n`.
### 6-O
This file contains the space complexity of this function/algorithm:
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
