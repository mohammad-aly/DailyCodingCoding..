#include<iostream>
using namespace std;

#define SIZE 3

class Stack
{
    int arr[SIZE];
    int top;

    public:

    Stack()
    {
        top = -1;
    }
    
    void push(int val)
    {
        if(top == SIZE - 1)
            cout<<"Stack Is Full"<<endl;
        else
        {
            ++top;
            arr[top] = val;
        }   
    }   
    
    void pop()
    {
        if(top == -1)
            cout<<"Stack Is Empty"<<endl;
        else
        {
            cout<<"Popped element = "<<arr[top]<<endl;
            top--;
        }   
    }
};

        
int main()
{
    Stack s;
        
    cout<<"Pushing element: "<<10<<endl;
    s.push(10);
    cout<<"Pushing element: "<<20<<endl;
    s.push(20);
    cout<<"Pushing element: "<<30<<endl;
    s.push(30);
    cout<<"Pushing element: "<<40<<endl;
    s.push(40);
    s.pop();
    cout<<"Pushing element: "<<40<<endl;
    s.push(40);
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    return 0;
}
