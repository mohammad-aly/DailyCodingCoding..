// https://leetcode.com/problems/search-in-rotated-sorted-array/description/

// approach

/*
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

first find minimum element in the array
    where prev > min < next and then

now search in the left array part i.e 0 to min-1 index
and search in the right array part i.e min+1 to n-1 index

*/



class Solution {
public:

 int BinSearch(vector<int>& nums, int start, int end,int target){

        // int start = 0, end = nums.size()-1;
        // int ans = -1;

        while(start <= end){

            int mid = start + (end - start)/2;

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] >= target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }

        }

        return -1;

    }


    int minEle(vector<int>& nums){

        int N = nums.size();
        int start = 0, end = nums.size()-1;

        while(start <= end){

            int mid = start + (end - start)/2;

            int next = (mid + 1)%N;
            int prev = (mid + N - 1)%N;

            if(nums[mid] <= nums[prev] && nums[mid] <= nums[next]){
                return mid;
            }
            else if(nums[0] <= nums[mid]){
                start = mid + 1;
            }
            else if(nums[mid] <= nums[N-1]){
                end = mid - 1;
            }

        }

        return 0;

    }

   


    int search(vector<int>& nums, int target) {
        
        int mini = minEle(nums);

        int BS1 = BinSearch(nums, 0, mini-1, target);
        int BS2 = BinSearch(nums, mini, nums.size()-1, target);

        if(BS1 == -1) {
            return BS2;
        }else{
            return BS1;
        }

        return -1;

    }
};