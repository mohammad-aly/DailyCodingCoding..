
// given: all numbers in the array will lie b/w 1 to N
/*
  first take the number and go to that index and check if it is a  negative if not make it negative 
  then do the same thing and paralelly check if the number is negative while looping?? 
  if it is a negative then push it into the answer list becoze it is a duplicate

  Input: nums = [4,3,2,7,8,2,3,1]

                [4,3,2,7,-8,2,3,1]
                0 1 2 3 4 5 6 7 8 

                [4,3,2,-7,-8,2,3,1]
                0 1 2 3 4 5 6 7 8 

                [4,3,-2,-7,-8,2,3,1]
                0 1 2 3 4 5 6 7 8 

                [4,3,-2,-7,-8,2,-3,-1]
                0 1 2 3 4 5 6 7 8 

                here we visit same number twice thus we come to conclude that it is negative in 
                second arrival ,that means it is duplicate
                
                
  Output: [2,3]

  TC: O(N)
  SC: O(1)

*/




import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        
        ArrayList<Integer> ans = new ArrayList<Integer>();

        for(int i=0; i<nums.length; i++){
            
           int index = Math.abs(nums[i])-1;
           if(nums[index] < 0){
               ans.add(Math.abs(nums[i]));
           }
           nums[index] = -nums[index];

        }

        if(ans.size() == 0){
            // ans.add(-1);
            return ans;
        }else{
            return ans;
        }

    }
}