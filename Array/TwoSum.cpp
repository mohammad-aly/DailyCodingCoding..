// https://leetcode.com/problems/two-sum/?envType=study-plan&id=data-structure-i

// Eample 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

/*
using hashmap we can do this
1)first find the (target-arr[i]) element in the hashmap...
    1-> if the element is found then store index, and element mp[element];
    2-> else add the (element, index) in map mp[arr[i]] = i;
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        unordered_map<int,int> mp;
        
        for(int i=0; i<nums.size(); i++){
            int element = target - nums[i];
            if(mp.find(element) != mp.end()){
                 ans.push_back(i);
                 ans.push_back(mp[element]);
            }
            mp[nums[i]]=i;
        }
        
        
        
        return ans;
        
    }
};

