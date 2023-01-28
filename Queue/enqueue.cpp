#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)

int rear = -1;
int front = -1;
int size = 3;

bool isQueueFull(int size){
    if(front == 0 && rear == size-1){
        return true;
    }
    if(rear == front-1){
        return true;
    }

    return false;
}


void enQueue(int arr[], int size, int val){

    if(isQueueFull(size)){
        cout<<"Queue is full!"<<endl;
    }

    else{
        if(front == -1){
            front = 0;
        }

        rear = (rear + 1)%size;
        arr[rear] = val;
    }

}


int main(){
    
    int arr[size];

    enQueue(arr, size, 1);
    enQueue(arr, size, 2);
    enQueue(arr, size, 3);
    enQueue(arr, size, 3);
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}