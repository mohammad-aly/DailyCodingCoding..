#include<bits/stdc++.h>
using namespace std;

//finding for the best position for the element
//by comparing adjacent elements n-1-i


//TC : O(N*N)
//SC : O(1) 

void Selection(int arr[], int n){

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }

        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}


//Making Efficiency for already sorted arrays
//TC : O(N)

void SelectionEff(int arr[], int n){

    bool flag;

    for(int i=0; i<n-1; i++){
        flag = 0;
        for(int j=0; j<n-1-i; j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = 1;
            }

        }
        if(flag == 1){
            break;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}


int main(){
    
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    Selection(arr, n);

    cout<<endl;

    SelectionEff(arr,n);

    return 0;
}