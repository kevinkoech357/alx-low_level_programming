# Searching algorithms in C

Searching algorithms in C are used to locate a specific element within a collection of data, such as an array or a linked list. There are several common searching algorithms in C that you can implement depending on the data structure and requirements. Here are some popular searching algorithms implemented in C:

## Linear Search:

Linear search is the simplest search algorithm.
It scans the elements one by one until it finds the target element.
It is suitable for unordered lists.
Example code:
```c
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Found the target at index i
        }
    }
    return -1; // Target not found
}
```
## Binary Search:

Binary search is an efficient algorithm for sorted arrays.
It repeatedly divides the search range in half to quickly locate the target element.
Example code:
```c
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; // Found the target at index mid
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Target not found
}
```
## Hashing:

Hashing is a technique that uses a hash function to map keys (or values) to specific positions in a data structure called a hash table.
It provides constant-time average complexity for search operations.
Example code for a basic hash table implementation:
```c
#define TABLE_SIZE 1000
struct KeyValuePair {
    int key;
    int value;
};

struct KeyValuePair hashTable[TABLE_SIZE];

int hashFunction(int key) {
    return key % TABLE_SIZE;
}

void insert(int key, int value) {
    int index = hashFunction(key);
    hashTable[index].key = key;
    hashTable[index].value = value;
}

int search(int key) {
    int index = hashFunction(key);
    if (hashTable[index].key == key) {
        return hashTable[index].value;
    } else {
        return -1; // Key not found
    }
}
```
