#include<iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node *next;
};

class Queue
{
    Node *front, *rear;

    public:

    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int val)
    {
        Node *newNode = new Node();
        newNode->data = val;
        newNode->next = NULL;

        if(front == NULL && rear == NULL)
            front = rear = newNode;
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue()
    {
        if(front == NULL)
            cout<<"Queue is Empty"<<endl;
        else
        {
            cout<<"Dequeued Element = "<<front->data<<endl;
            
            Node *temp = front;

            front = front->next;
            if(front == NULL)
                rear = NULL;

            delete temp;
        }
    }
};
    
int main()
{
    Queue list;

    list.dequeue();

    cout<<"Enqueuing element: "<<10<<endl;
    list.enqueue(10);
    cout<<"Enqueuing element: "<<20<<endl;
    list.enqueue(20);
    cout<<"Enqueuing element: "<<30<<endl;
    list.enqueue(30);

    list.dequeue();
    list.dequeue();
    list.dequeue();
    list.dequeue();

    return 0;
}

