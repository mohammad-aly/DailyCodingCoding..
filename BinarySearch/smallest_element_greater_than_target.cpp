
// Example 1:
// Input: letters = ["c","f","j"], target = "a"
// Output: "c"
// Explanation: The smallest character that is lexicographically greater than 'a' in letters is 'c'.

/*
just search an letter in the array 
1)if element is found then --->move start to mid+1 i.e right because we have to find greater
2)if element is greater then target then store that element and move left -->high to mid-1 because we need greater but smaller


*/


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int start = 0, end = letters.size()-1;
        char ans = letters[0];

        while(start <= end){

            int mid = start + (end - start)/2;

            if(letters[mid] == target){
                start = mid + 1;
            }
            else if(letters[mid] > target){
                ans = letters[mid];
                end = mid-1;
            }
            else{
                start = mid + 1;
            }

        }

        return ans;

    }
};