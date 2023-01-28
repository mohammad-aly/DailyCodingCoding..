// https://leetcode.com/problems/pascals-triangle/description/


// APPROACH
// first fill vector with 1, and resize it HOW??
                        // resize it vector<int>(i+1, 1)
//          1           -> 0
//       1    1         -> 1
//     1   2   1        -> 2
//   1   3   3    1     -> 3
// 1   4   6   4    1   -> 4

// take the previous filled 1's row and add them and fill into the new vector position
// [previous_row][current_col] + [previous_row][current_col - 1] upto col-1
// temp[j] = ans[i-1][j] + ans[i-1][j-1];
// add them into answer vector

class Solution {
    public:
        vector<vector<int>> generate(int numRows) {
            
            vector<vector<int>> ans;
    
            for(int i=0; i<numRows; i++){
                vector<int> temp(i+1, 1);
                for(int j=1; j<i; j++){
                    temp[j] = ans[i-1][j] + ans[i-1][j-1];
                }
                ans.push_back(temp);
            }
    
            return ans;
        }
    };

