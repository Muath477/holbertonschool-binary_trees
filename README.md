# C - Binary Trees

Binary tree data structures and functions for the Holberton/ALX low-level
programming curriculum. This project covers basic binary trees, binary
search trees, AVL trees, and max binary heaps.

## Task 0 - New node

`binary_tree_node` creates a new binary tree node. A new node has no
children, and its parent is set to whatever is passed in.

### Prototype

```c
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
```

### Return

A pointer to the new node, or `NULL` on failure.

### Files

- `binary_trees.h` - header file with all prototypes and data structures
  (include guarded)
- `0-binary_tree_node.c` - `binary_tree_node`

### Compiling

```text
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o binary_trees
```

### Authors

Abdulrahman Saleh Alduqail, Muath Hassan Almutairi
