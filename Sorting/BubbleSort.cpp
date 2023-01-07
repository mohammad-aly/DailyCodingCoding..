#include<bits/stdc++.h>
using namespace std;

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


int main(){
    
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    Selection(arr, n);

    return 0;
}