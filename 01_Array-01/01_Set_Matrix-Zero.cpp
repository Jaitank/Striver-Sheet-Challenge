// question link : https://leetcode.com/problems/set-matrix-zeroes/


#include <bits/stdc++.h>
using namespace std;

// solution with space using two vectors :

class Solution1 {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        vector<int>forRow(row, 1);
        vector<int>forCol(col, 1);
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(matrix[i][j] == 0)
                {
                    forRow[i] = 0;
                    forCol[j] = 0;
                }
            }
        }
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(forRow[i] == 0 || forCol[j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        
    }
};



int main()
{
    
    return 0;
}