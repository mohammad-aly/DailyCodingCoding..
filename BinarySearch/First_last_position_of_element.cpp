// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

// approach
/*

Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]


for first position 
    if u find the element in binarysearch then go it on store index and make
    end = mid-1; move left upto end
for last position 
    if u find the element in binarysearch then go it on store index and make
    start = mid+1; move right upto end
 
*/


class Solution {
public:

    int FirstOccurance(vector<int>& nums, int ele){

        int start = 0, end = nums.size()-1;
        int res = -1;

        while(start <= end){

            int mid = start + (end - start)/2;

            if(ele == nums[mid]){
                res = mid;
                end = mid-1;
            }
            else if(ele < nums[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }

        }

        return res;

    }

    int LastOccurance(vector<int>& nums, int ele){

        int start = 0, end = nums.size()-1;
        int res = -1;

        while(start <= end){

            int mid = start + (end - start)/2;

            if(ele == nums[mid]){
                res = mid;
                start = mid+1;
            }
            else if(ele < nums[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }

        }

        return res;

    }

    vector<int> searchRange(vector<int>& nums, int target) {
        
        int f = FirstOccurance(nums, target);
        int l = LastOccurance(nums, target);
        
        vector<int> ans;
        ans.push_back(f);
        ans.push_back(l);

        return ans;

    }
};