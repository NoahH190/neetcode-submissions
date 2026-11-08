/*
int m[3][4];          // 3 rows, 4 cols
m[1][2] = 5;          // row 1, col 2
int x = m[i][j];

size returns row 

we need to use binary search in order to avoid looping through the whole matrix

1. While out target is not between the first position in separate rows, keep searching for said target
2. When found, apply binary search to the specific row


begin at top right of the matrix
while we still have a row to access and a column to access, we are going to deincrement the column if we are greater than the target, and deincrement the row if less than, when we are out, retrun false
*/


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        int m = matrix.size(), n = matrix[0].size();
        int r = 0, c = n-1; 
        while(r < m && c >= 0){
            if(matrix[r][c] < target){
                r++; 
            }
            else if(matrix[r][c] > target){
                c--;
            } else return true; 
        }
        return false; 
    }
};
