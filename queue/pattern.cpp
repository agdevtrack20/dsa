Common Queue Patterns in DSA
1. Breadth-First Search (BFS)
queue<int> q;

q.push(source);

while(!q.empty()){

    int node=q.front();
    q.pop();

    for(auto child:adj[node]){
        if(!vis[child]){
            vis[child]=true;
            q.push(child);
        }
    }
}
2. Level Order Traversal of Binary Tree
queue<TreeNode*> q;
q.push(root);

while(!q.empty()){

    TreeNode* node=q.front();
    q.pop();

    if(node->left)
        q.push(node->left);

    if(node->right)
        q.push(node->right);
}
3. Multi-Source BFS

Initialize the queue with all starting points.

Examples:

Rotting Oranges
Walls and Gates
Nearest Exit
01 Matrix
4. Monotonic Queue

Maintains elements in increasing or decreasing order.

Applications:

Sliding Window Maximum
Sliding Window Minimum
Dynamic Programming optimizations
5. Simulation Problems

Examples:

Task Scheduler
Dota2 Senate
Josephus variations
Process scheduling


Easy
Implement Queue using Stacks
Implement Stack using Queues
Number of Recent Calls
Moving Average from Data Stream
First Unique Character in a Stream
Medium
Binary Tree Level Order Traversal
Rotting Oranges
01 Matrix
Walls and Gates
Open the Lock
Dota2 Senate
Kth Largest Element in a Stream (Priority Queue)
Hard
Sliding Window Maximum (Monotonic Queue)
Shortest Path in a Grid with Obstacles Elimination
Trapping Rain Water II (Priority Queue)
Merge K Sorted Lists (Priority Queue)
Minimum Cost to Hire Workers (Priority Queue