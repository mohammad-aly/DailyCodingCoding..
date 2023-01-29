import java.util.Arrays;

// https://leetcode.com/problems/3sum/submissions/868863109/

// optimized approach
/*
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]

example testcase:
[0,-1,0,-2,-2,-1,-1,0,2,2,2]

1)first sort the array
[-2,-2,-1,-1,-1,0,0,0,2,2,2]

we need three numbers == 0
so, we need three numbers like 
a + b + c = 0
b + c = 0 - a;


now keep one pointer for loop i=0 upto n-2 and using two pointers from i+1 to n-1 find the sum= 0-nums[i];
condition i==0 || i>0 && nums[i] != nums[i-1]
low < high
find nums[low] + nums[high] = sum;
if found store the elements
and to avoid the duplicates move low pointer upto duplicate ends while(nums[low] != nums[low+1]) low++; 
same for high  while(nums[high] != nums[high+1]) high--;

if(nums low + nums high < sum) low++;
else high--;


*/



class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        
        Arrays.sort(nums);
        int n = nums.length;
        List<List<Integer>> res = new LinkedList<>();

        for(int i=0; i<n-2; i++){
            if(i == 0 || (i>0 && nums[i] != nums[i-1])){
                int low = i+1, high = n-1, sum = 0-nums[i];
                while(low < high){
                    if(nums[low] + nums[high] == sum){
                        res.add(Arrays.asList(nums[i], nums[low], nums[high]));
                        
                        while(low < high && nums[low] == nums[low+1]) low++;
                        while(low < high && nums[high] == nums[high-1]) high--;

                        low++;
                        high--; 
                    }
                    else if(nums[low] + nums[high] < sum){
                        low++;
                    }
                    else{
                        high--;
                    }
                    
                } 
            }
        }
        

        return res;

    }
}