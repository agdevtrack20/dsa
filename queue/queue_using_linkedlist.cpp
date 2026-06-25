struct Node{
    int data;
    Node* next;

    Node(int x){
        data=x;
        next=NULL;
    }
};

class Queue{

    Node *front,*rear;

public:

    Queue(){
        front=rear=NULL;
    }

    void enqueue(int x){

        Node* temp=new Node(x);

        if(rear==NULL){
            front=rear=temp;
            return;
        }

        rear->next=temp;
        rear=temp;
    }

    void dequeue(){

        if(front==NULL)
            return;

        Node* temp=front;
        front=front->next;

        if(front==NULL)
            rear=NULL;

        delete temp;
    }
};