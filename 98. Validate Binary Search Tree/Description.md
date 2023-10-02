<h1><a href="https://leetcode.com/problems/validate-binary-search-tree/">Validate Binary Search Tree</a></h1>
<p><strong>Medium</strong></p>
<p><strong>Topics - Binary Tree, Depth-First Search, Tree Traversal, Binary Search Tree</strong></p>

<p>Given the root of a binary tree, determine if it is a valid binary search tree (BST).</p>

<p>A valid BST is defined as follows:</p>

<ul>
	<li>The left subtree of a node contains only nodes with keys less than the node's key.</li>
	<li>The right subtree of a node contains only nodes with keys greater than the node's key.</li>
	<li>Both the left and right subtrees must also be binary search trees.</li>
</ul>

<h2>Example 1:</h2>

![Alt text](image.png)
<p><strong>Input:</strong> root = [2,1,3]</p>
<p><strong>Output:</strong> true</p>

<h2>Example 2:</h2>

![Alt text](image-1.png)
<p><strong>Input:</strong> root = [5,1,4,null,null,3,6]</p>
<p><strong>Output:</strong> false</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range [1, 104].</li>
	<li>-231 <= Node.val <= 231 - 1</li>
</ul>
