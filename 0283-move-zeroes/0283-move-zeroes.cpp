class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0; // pointer for placing non-zero elements

        // Traverse the array with right pointer
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                // Swap only when left and right are different
                if (left != right) {
                    int temp = nums[left];
                    nums[left] = nums[right];
                    nums[right] = temp;
                }
                left++; // move left pointer forward
            }
        }
    }
};