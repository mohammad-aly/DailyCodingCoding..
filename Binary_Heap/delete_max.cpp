#include<iostream>
using namespace std;

class BinaryHeap
{
    public:

    void BuildHeap(int arr[],int size)
    {
        int i = size / 2;
        for(; i >= 0; i--)
                Heapify(arr,i,size);
    }

    void Heapify(int arr[],int index,int size)
    {
        int left = 2 * index + 1;
        int right = left + 1;
        int max = index;
        if(left <= size && arr[left] > arr[max])
                max = left;
        if(right <= size && arr[right] > arr[max])
                max = right;
        if(index != max)
        {
                swap(&arr[max], &arr[index]);
                Heapify(arr,max,size);
        }
    }

    void DeleteMax(int arr[], int last_index, int *size)
    {
        swap(&arr[0], &arr[last_index]);
        cout<<"Max = "<<arr[last_index]<<endl;
        *size = *size - 1; //Updating the original size value
        Heapify(arr, 0, *size - 1); //Call Heapify with new last index
    }

    void swap(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }

    void print(int arr[], int size)
    {
        for(int i = 0; i < size; i++)
            cout<<arr[i]<<" ";

        cout<<endl;
    }
};

int main()
{   
    BinaryHeap obj;

    int arr[] = {10, 20, 40, 30, 80, 60, 50};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"The Array Elements Are:"<<endl;
    obj.print(arr, size);

    cout<<"Constructing Heap..."<<endl;
    obj.BuildHeap(arr, size - 1);

    cout<<"The Array Elements Are:"<<endl;
    obj.print(arr, size);

    /* After deleting the max element, we will reduce the array size by 1.
       It should reflect in the main function as well. So that we are sending &size as an argument. */

    obj.DeleteMax(arr, size - 1, &size);

    cout<<"The Array Elements Are:"<<endl;
    obj.print(arr, size);

    obj.DeleteMax(arr, size - 1, &size);

    cout<<"The Array Elements Are:"<<endl;
    obj.print(arr, size);
    

    return 0;
}