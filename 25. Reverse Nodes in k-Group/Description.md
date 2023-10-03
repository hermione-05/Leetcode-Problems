<h2><a href="https://leetcode.com/problems/reverse-nodes-in-k-group/">25. Reverse Nodes in k-Group</a></h2>
<h3>Hard</h3>

Given the `head` of a linked list, reverse the nodes of the list `k` at a time, and return the modified list.

`k` is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of `k` then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.
A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

<p>&nbsp;</p>
<p><strong class="example">Examples:</strong></p>

<img src="https://assets.leetcode.com/uploads/2020/10/03/reverse_ex1.jpg">

```
Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
```

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>The number of nodes in the list is n</code></li>
	<li><code>1 <= k  <= n <= 5000</code></li>
	<li><code>0 <= Node.val <= 1000</code></li>
</ul>