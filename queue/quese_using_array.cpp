class Queue {

    int arr[100];
    int front, rear;

public:

    Queue() {
        front = 0;
        rear = -1;
    }

    void enqueue(int x) {
        arr[++rear] = x;
    }

    void dequeue() {
        if(front <= rear)
            front++;
    }

    int Front() {
        return arr[front];
    }

    bool empty() {
        return front > rear;
    }
};