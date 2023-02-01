#include<bits/stdc++.h>
using namespace std;
#define test int t;cin>>t;while(t--)

int main(){
    
    int n; 
    cin>>n;
    set<int> s;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }

    auto it = lower_bound(s.begin(), s.end(),5); //O(N)
    auto it = s.lower_bound(5);//O(logn)

    return 0;
}