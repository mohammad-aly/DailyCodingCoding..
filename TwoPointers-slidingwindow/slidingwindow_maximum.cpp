class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        
        int i=0,j=0;
        int n = arr.size();
        list<int> l;
        vector<int> ans;
        
        while(j<n){
            
            if(l.empty()){
                l.push_back(arr[j]);
            }
            else{
                while(!l.empty() && l.back()<arr[j]){
                    l.pop_back();
                }
                l.push_back(arr[j]);
            }
            
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                ans.push_back(l.front());
                if(arr[i] == l.front()){
                    l.pop_front();
                }
                i++;
                j++;
            }
            
        }
        
        return ans;

    }
};