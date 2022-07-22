// question link: https://leetcode.com/problems/maximum-subarray/

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums) // we have to return sum of max sub array
{
    int sum = 0;
    int maxSum = 0;
    int test = 0; // this will tell us that sum is negative or not

    for(int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if(sum < 1) sum = 0;
        else
        {
            maxSum = max(maxSum, sum);
            test  = 1;
        }
    }

    if(test == 0)
    {
        int maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            maxi = max(maxi, nums[i]);
        }

        return maxi;
    }
    else return maxSum;

}
int main()
{
    
    return 0;
}