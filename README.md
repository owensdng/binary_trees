## C - Binary trees

This was a group project by Noah Owens Abuto (`owensdng@gmail.com`) in which we learnt about the details, advantages, and disadvantages of using trees as data structures. We learned about how to qualify trees as well as how to traverse them. Throughout the project, we implemented binary, binary search, AVL, and Max Binary Heap trees.


## Tests :heavy_check_mark:


* [tests](./tests): Folder of test files for all tasks. Provided by ALX.

## Helper File :raised_hands:

* [binary_tree_print.c](./binary_tree_print.c): C function that prints binary trees in a pretty way.

## Header File :file_folder:

### Advantages and disadvantages of using trees as data structures

**Advantages:**

* Trees are very efficient for storing and retrieving data that is naturally hierarchical, such as data for a file system or a family tree.
* Trees can be used to implement a variety of data structures, such as binary search trees, heaps, and graphs.
* Trees are very scalable and can be used to store and manage very large datasets.

**Disadvantages:**

* Trees can be complex to implement and maintain.
* Trees can be inefficient for performing certain operations, such as sorting or searching for a specific value in a large dataset.

### Qualifying trees

Trees can be qualified in a number of ways, such as by:

* The number of children each node can have (e.g., binary trees, ternary trees, etc.)
* The ordering of the children of each node (e.g., binary search trees, heaps, etc.)
* The balance of the tree (e.g., AVL trees, red-black trees, etc.)

### Traversing trees

There are a number of different ways to traverse trees, such as:

* **Pre-order traversal:** Visit the current node, then traverse the left subtree, then traverse the right subtree.
* **In-order traversal:** Traverse the left subtree, then visit the current node, then traverse the right subtree.
*
 
**Post-order traversal:** Traverse the left subtree, then traverse the right subtree, then visit the current node.

### Implementing binary trees in C

To implement a binary tree in C, you can use a struct like the following:

```c
typedef struct node {
  int value;
  struct node *left;
  struct node *right;
} Node;
