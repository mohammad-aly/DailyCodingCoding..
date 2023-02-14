
/*
Example 2:

Input: nums = [1,2,1,3,5,6,4]
Output: 5
Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
 
approach:
----------------------------------------------------------------
identification of peak element is the neighbour elements left <- and -> right both will be smaller than that
** in the condition that mid > 0 and mid < n-1
    then if(a[mid] > a[mid+1] && a[mid] > a[mid+1]) return mid;
    else hope that greatest element in the neighbours will have chances to become peak so move at greatest side
    if(a[mid] < a[mid+1]) start = mid+1;
    else if(a[mid] < a[mid-1]) end = mid-1;

**imp is that if mid comes to left end i.e = 0
then check if(mid > mid+1) return mid;
else returm mid+1;

**imp if mid comes to right end i.e = n-1;
then check if(mid > mid-1) return mid;
else returm mid-1;

*/



class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int start = 0;
        int end = nums.size()-1;
        if(nums.size()==1) return 0;
        
        while(start <= end){

            int mid = start + (end - start)/2;

            if(mid > 0 && mid < nums.size()-1){

                if(nums[mid - 1] < nums[mid] && nums[mid + 1] < nums[mid]){
                    return mid;
                }
                else if(nums[mid] < nums[mid - 1]){
                    end = mid - 1;
                }
                else if(nums[mid] < nums[mid + 1]){
                    start = mid + 1;
                }

            }

            else if(mid == 0){
                if(nums[mid] > nums[mid+1]){
                    return mid;
                }
                else{
                    return mid+1;
                }
            }

            else if(mid == nums.size()-1){
                if(nums[mid] > nums[mid-1]){
                    return mid;
                }else{
                    return mid-1;
                }
            }


        }
        return nums[0];
    }
};