Priority Queue

Unlike a normal queue, elements are removed according to priority, not insertion order.

Max Heap (default):

priority_queue<int> pq;

pq.push(4);
pq.push(10);
pq.push(2);

cout << pq.top();

Output:

10

Min Heap:

priority_queue<int, vector<int>, greater<int>> pq;