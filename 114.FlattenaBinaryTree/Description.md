# Binary Tree Flattening in C++

This repository contains C++ code for flattening a binary tree into a linked list.

## Description

Flattening a binary tree means converting it into a linked list in a specific way. In this flattened linked list, the left child of each node will be `nullptr`, and the right child of each node will point to the next node in the list, according to a specific order.

The provided C++ code defines a `TreeNode` structure for binary tree nodes and a `flatten` function to flatten the binary tree. The `flatten` function uses a recursive approach to perform the following steps:

1. Recursively flatten the left and right subtrees.
2. Store the right subtree in a temporary variable.
3. Make the left subtree the new right subtree.
4. Find the end of the current flattened subtree.
5. Attach the temporary right subtree to the end of the current subtree.

## Usage

You can use this code to flatten a binary tree into a linked list. Simply call the `flatten` function with the root of your binary tree.

```cpp
// Example usage
TreeNode* root = /* Your binary tree root */;
flatten(root);
```
