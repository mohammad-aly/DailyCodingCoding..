#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)

int main(){
    
    //in arrays
    
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //it gives the element if it exits else next greater element in the array
    //otherwise it gives the garbage value
    int *ptr = lower_bound(a,a+n, 26);
    //we can check if lower bound exits in the array than 25
    if(ptr == (a+n)){
        cout<<"Not Found";
        return 0;
    }
    cout<<(*ptr)<<endl;


    //it gives the next greater element in the array
    //otherwise it gives the garbage value
    // int *ptr = upper_bound(a,a+n, 5);
    int *ptr = upper_bound(a+4,a+n, 5);
    //we can check if upper bound exits in the array than 25
    if(ptr == (a+n)){
        cout<<"Not Found";
        return 0;
    }
    cout<<(*ptr)<<endl;



}