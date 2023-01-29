// https://leetcode.com/problems/set-matrix-zeroes/description/

// approach
/*
here 
Input: matrix = [[1,1,1],
                [1,0,1],
                [1,1,1]]
Output: [[1,0,1],
        [0,0,0],
        [1,0,1]]

to set like that store the index value of row and the col when u see nums[i][j] == 0
as dummy1[i] = 0 and dummy2[j] = 0

now iterate the matrix and make nums[i][j] == 0 when u see 0 in dumm1 || dummy 2


*/


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();

        vector<int> dummy1(row,-1), dummy2(col, -1);

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j] == 0){
                    dummy1[i] = 0;
                    dummy2[j] = 0;
                }
            }
        }

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(dummy1[i] == 0 || dummy2[j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};