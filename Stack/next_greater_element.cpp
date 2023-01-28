// https://leetcode.com/problems/next-greater-element-i


// intution -> using stack
// ----------------------------------
/*
iterate array elements from end
    steps)
    1)at first stack is empty, if empty add -1;
    3)check if (s.top() > arr[i]), if yes then push top element into vector
    4)else if size>0 and s.top() is <= arr[i] then , pop upto the size>0 and s.top() is >= arr[i] then push
        1-> if stack is empty = push -1;
        2-> else push top element into vector
    add the element into stack before iterating

    reverse answer vector as answers will be stored in reverse


    Time Complexity->O(N)
    Space Complexity->O(N)
    
*/







class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums) {
        
        vector<int> ans;
        vector<int> v;

        stack<int> s;

        for(int i=nums.size()-1; i>=0; i--){
            if(s.size() == 0){
                v.push_back(-1);
            }
            else if(s.size() > 0 && nums[i] < s.top()){
                v.push_back(s.top());
            }
            else if(s.size() > 0 && nums[i] >= s.top()){
                while(s.size() > 0 && nums[i] >= s.top()){
                    s.pop();
                }
                if(s.size() == 0){
                    v.push_back(-1);
                }else{
                    v.push_back(s.top());
                }
            }
             
            s.push(nums[i]);
        }

        reverse(v.begin(), v.end());

        unordered_map<int,int> mp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]] = v[i];
        }

        for(auto it:nums1){
            if(mp.find(it) != mp.end()){
                ans.push_back(mp[it]);
            }
        }

        return ans;

    }

};