// https://leetcode.com/problems/find-the-duplicate-number/description/

// in O(n)
/*

Example 1:
Input: nums = [1,3,4,2,2]
Output: 2



take the array element and consider it as index then go to that index and 
make that number negative , so again if u visit the negative number then it is the index that is repeated
now return the index 
*/


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        for(int i=0; i<nums.size(); i++){
            int index = abs(nums[i]);
            if(nums[index] < 0){
                return index;
            }else{
                nums[index] = -nums[index];
            }
        }

        return 0;
        
    }
};