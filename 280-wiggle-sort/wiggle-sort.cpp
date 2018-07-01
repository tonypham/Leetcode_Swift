// Given an unsorted array nums, reorder it in-place such that nums[0] <= nums[1] >= nums[2] <= nums[3]....
//
// Example:
//
//
// Input: nums = [3,5,2,1,6,4]
// Output: One possible answer is [3,5,1,6,2,4]
//


class Solution {
public:
     void wiggleSort(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (i%2 == 0) {
                continue;
            }
            
            if (i + 1 < nums.size()) {
                int maxValue = max(nums[i - 1], nums[i + 1]);
                int temp = nums[i];
                if (nums[i] < maxValue) {
                    nums[i] = maxValue;
                    if (nums[i - 1] > nums[i + 1]) {
                        nums[i - 1] = temp;
                    }
                    else {
                        nums[i + 1] = temp;
                    }
                }
            }
            else {
                int temp = nums[i];
                if (nums[i] < nums[i - 1]) {
                    nums[i] = nums[i - 1];
                    nums[i - 1] = temp;
                }
            }
        }
    }
};
