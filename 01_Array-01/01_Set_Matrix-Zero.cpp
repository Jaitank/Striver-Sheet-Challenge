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

// Now Second solution without space (Optimised solution)

// check strivers video to see its explanation

class Solution2 {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int col0 = true;
        int row = matrix.size();
        int col = matrix[0].size();
        
        for(int i = 0; i < row; i++)
        {
            if(matrix[i][0] == 0) col0 = false;
            for(int j = 1; j < col; j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        // now change in matrix
        for(int i = row - 1; i >= 0; i--)
        {
            for(int j = col - 1; j >= 1; j--)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
            if(col0 == false) matrix[i][0] = 0;
        }
        
    }
};


int main()
{
    
    return 0;
}