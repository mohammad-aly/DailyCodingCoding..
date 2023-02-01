#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)

int main(){
    
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //it gives the next smaller element in the array
    //otherwise it gives the garbage value
    auto it = lower_bound(a.begin(), a.end(), 26);
    //we can check if lower bound exits in the array than 25
    if(it == a.end()){
        cout<<"Not Found";
        return 0;
    }
    cout<<(*it)<<endl;

    
    //it gives the next greater element in the array
    //otherwise it gives the garbage value
    // int *ptr = upper_bound(a,a+n, 5);
    auto it = upper_bound(a.begin(), a.end(), 5);
    //we can check if upper bound exits in the array than 25
    if(it == a.end()){
        cout<<"Not Found";
        return 0;
    }
    cout<<(*it)<<endl;



    return 0;
}