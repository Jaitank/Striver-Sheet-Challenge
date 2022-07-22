// question link: https://leetcode.com/problems/next-permutation/


#include <bits/stdc++.h>
using namespace std;


class Solution
{
    private:
    void reverse(vector<int> &nums, int st, int end)
    {
        while(st < end)
        {
            swap(nums[st++], nums[end--]);
        }     
    }

    public:
    void NextPermutation(vector<int> &nums)
    {
        // first we have to check edge case that is given numbers is last permutation or not
        // if it is last permutation means this should be in decreasing order like 5 4 3 2 1
        bool isLast = true;
        int size = nums.size();
        for(int i = 0; i < size - 1; i++)
        {
            if(nums[i] < nums[i + 1])
                isLast = false;
        }
    
        // now if isLast variables tell us that permutation is last or not and if yes then we have to reverse and return
        // first permuation becuase first permutation is next permutation of last one
        if(isLast)
        {
            reverse(nums, 0, size - 1);
            return;
        }
        // if given sequence is not last permutation then
        int pnt = 0;
        for(int i = size - 1; i >= 1; i--)
        {
            if(nums[i - 1] < nums[i])
            {
                pnt = i - 1;
                break;
            }
        }
        for(int i = size - 1; i > pnt; i--)
        {
            if(nums[i] > nums[pnt])
            {
                swap(nums[i], nums[pnt]);
                break;
            }
        }
        // now we have to reverse that part of sequence which is after that point
        // reveres from pnt + 1 to size - 1
        if(pnt + 1 <  size - 1)
            reverse(nums, pnt + 1, size - 1);

    }

};


int main()
{
    
    return 0;
}