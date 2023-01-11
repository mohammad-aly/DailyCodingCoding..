
/* Input: matrix = [
                    [1,2,3],
                    [4,5,6],
                    [7,8,9]
                   ]

                  step1 : Transpose the matrix
                   after transposing the above matrix we get the following

                   [
                    [1,4,7],
                    [2,5,8],
                    [3,6,9]
                   ]

                   step2: reverse the rows 

                    [7,4,1], -> reverse
                    [8,5,2],
                    [9,6,3]

                    in cpp -> reverse(matrix[i].begin(), matrix[i].end());
                    in java -> for(int j=0; j<matrix.length/2; j++){
                                    int temp = matrix[i][j];
                                    matrix[i][j] = matrix[i][matrix.length-1-j];
                                    matrix[i][matrix.length-1-j] = temp;
                                 }

Output: [
        [7,4,1],
        [8,5,2],
        [9,6,3]
        ]

TC: O(N*N)+O(N*N)
SC: O(1)

*/


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i=0; i<matrix.size(); i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }


    }
};