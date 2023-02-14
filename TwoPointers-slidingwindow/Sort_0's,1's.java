

//APPROACH
// ------------
//just try use two pointers 
// zero = 0, two = n-1
// move normal pointer (i) with i<=two
//if u see zero swap num[i]->num[zero] and increment i++,zero++
//if u see two swap num[i]->num[two] and decrement two--
//if u see 1 increment i++;

// TC: O(N)
// SC: O(1)




class Solution {
    public void sortColors(int[] nums) {
        
        int zero = 0, two = nums.length-1;

        for(int i=0; i<=two; ){

            if(nums[i] == 0){
                int temp = nums[i];
                nums[i] = nums[zero];
                nums[zero] = temp;
                i++;
                zero++;
            }
            else if(nums[i] == 2){
                int temp = nums[i];
                nums[i] = nums[two];
                nums[two] = temp;
                two--;
            }
            else if(nums[i] == 1){
                i++;
            }

        }

    }
}