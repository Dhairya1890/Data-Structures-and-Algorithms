<h1> breadth-First-Search </h1>
Traversing the tree level by level is known as BFS
It is done using Recusrions and Iterations

Some form of auxiliary storage like Array or Queue are necessary for BFS

By Recusions (Naive Approach) O(n) Time and Space Complexity

Approach - Starting with the current node, add visited nodes in an array

The idea is to traverse the tree recursively, passing the current node and its level, starting with the root at level 0. For each visited node, its value is added to the result array, by considering the value of current level as an index in the result array.

