### Intuition
Question itself explicitly says pop and push, so the data structure we use would be a stack. We keep a pointer starting at 0 index and it reaches the popped array length, then we know we have answer as true as we could form popped array via pushed array.

### Approach
- Intialize a stack
- For every element in pushed array :
    - We push to stack
    - Now while the stack is not empty, stack top matches the popped[i], we can pop top element and do i++ (move forward to next pointer)
- Once we come out of for loop we see wheather the stack we created is empty or not. If the push and pop operations are valid then the stack will be empty and the answer is true else false.

### Complexity
- Time complexity: O(n)
- Space complexity: O(n)