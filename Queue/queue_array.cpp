#include<iostream>
using namespace std;

#define SIZE 3

class Queue
{
    int arr[SIZE];
    int front;
    int rear;

    public:

    Queue()
    {
        front = 0;
        rear = 0;
    }

    void enqueue(int val)
    {
        if(rear == SIZE)
            cout<<"Queue is Full"<<endl;
        else
        {
            arr[rear] = val;
            rear++;
        }
    }

    void dequeue()
    {
        if(front == rear)
            cout<<"Queue is Empty"<<endl;
        else
        {
            cout<<"Dequeued element = "<<arr[front]<<endl;
            front++;
        }
    }
};

int main()
{
    Queue q;

    cout<<"Enqueuing element: "<<10<<endl;
    q.enqueue(10);
    cout<<"Enqueuing element: "<<20<<endl;
    q.enqueue(20);
    cout<<"Enqueuing element: "<<30<<endl;
    q.enqueue(30);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}