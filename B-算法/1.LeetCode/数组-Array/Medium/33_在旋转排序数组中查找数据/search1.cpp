/*=========================================================================\
* Copyright(C)2016 Chudai.
*
* File name    : search1.cpp
* Version      : v1.0.0
* Author       : 初代
* Date         : 2016/08/17
* Description  :
* Function list: 1.
*                2.
*                3.
* History      :
\*=========================================================================*/

/*-----------------------------------------------------------*
 * 头文件                                                    *
 *-----------------------------------------------------------*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0)
        {
            return 0;
        }
        
        int i = 0;
        int j = nums.size()-1;
        int mid = 0;
        
        while(i <= j)
        {
            mid = (i + j) / 2;
            if (nums[mid] == target)
                return mid;
                
            if (nums[mid] >= nums[i]) //转折点在右边或没有
            {
                if (nums[mid] > target && target >= nums[i])
                {
                    j = mid - 1;
                }
                else
                {
                    i = mid + 1;
                }
            }
            else    //转折点在左边
            {
                if (target > nums[mid] && target < nums[i])
                {
                    i = mid + 1;
                }
                else
                {
                    j = mid - 1;
                }
            }
        }
        return -1;
    }
};
