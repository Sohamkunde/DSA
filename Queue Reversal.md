## 01. Queue Reversal

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/queue-reversal/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Queue&sortBy=submissions)

### Problem Description

**Task:** Given a queue q containing integer elements, your task is to reverse the queue.Examples:Input: q[] = [5, 10, 15, 20, 25]

#### Examples

##### Example 1

- **Output:**
```text
[25, 20, 15, 10, 5]
```
- **Explanation:** After reversing the given elements of the queue, the resultant queue will be 25 20 15 10 5.

##### Example 2

- **Input:**
```text
q[] = [1, 2, 3, 4, 5]
```
- **Output:**
```text
[5, 4, 3, 2, 1]
```
- **Explanation:** After reversing the given elements of the queue, the resultant queue will be 5 4 3 2 1.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-20 11:13:30
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        stack<int>st;
        while(!q.empty())
        {
            st.push(q.front());
            q.pop();
            
        }
        while(!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
      
        
    }
};
```

*Generated on: 10/20/2026, 11:14:14 AM*