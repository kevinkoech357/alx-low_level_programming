# 0x1A-hash_tables

Hash tables, also known as hash maps, are a common data structure used to store and retrieve data efficiently. They provide fast access to values based on a unique key.

In C, hash tables are typically implemented using arrays and linked lists. Here's a basic overview of how you can implement a hash table in C:

## Define the structure for a hash table node:

```c
struct Node {
    int key;
    int value;
    struct Node* next;
};
```
Each node in the hash table contains a key-value pair and a pointer to the next node in case of collisions.

## Define the size of the hash table array:

```c
#define SIZE 100
```

The size of the array will determine the number of buckets available for storing data. Choosing an appropriate size is important for achieving a good balance between memory usage and collision avoidance.

## Create an array of pointers to nodes:

```c
struct Node* hashTable[SIZE];
```

This array will serve as the hash table, where each element is a pointer to a linked list of nodes.

## Implement a hash function:
A hash function takes a key and returns an index in the hash table array. It should distribute the keys uniformly across the available buckets to minimize collisions. Here's a simple hash function example:

```c
int hashFunction(int key) {
    return key % SIZE;
}
```

In this case, we are using the modulus operator to calculate the index.

### Implement operations for the hash table:
Insertion: To insert a key-value pair into the hash table, you need to compute the hash of the key to get the index and then add a new node to the linked list at that index. If a collision occurs (i.e., a node already exists at that index), you can either handle it by chaining (adding the new node to the existing list) or by using other collision resolution techniques.
Lookup: To retrieve a value from the hash table, you need to compute the hash of the key, traverse the linked list at the corresponding index, and compare the keys until you find a match.
Here's a basic example of insertion and lookup operations:

```c
void insert(int key, int value) {
    int index = hashFunction(key);
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;

    if (hashTable[index] == NULL) {
        // No collision, insert as the first node
        hashTable[index] = newNode;
    } else {
        // Collision occurred, add to the linked list
        struct Node* currentNode = hashTable[index];
        while (currentNode->next != NULL) {
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
    }
}
```

```c
int lookup(int key) {
    int index = hashFunction(key);
    struct Node* currentNode = hashTable[index];
    while (currentNode != NULL) {
        if (currentNode->key == key) {
            return currentNode->value;
        }
        currentNode = currentNode->next;
    }
    return -1;  // Key not found
}
```
Please note that this is a basic implementation, and you might need to handle additional aspects like resizing the hash table to accommodate more data, dealing with collisions using techniques like open addressing or separate chaining, and managing memory allocation and deallocation properly.


