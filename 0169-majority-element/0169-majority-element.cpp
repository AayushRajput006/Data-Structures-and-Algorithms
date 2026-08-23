class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len = nums.size();

        //sort the array
        sort(nums.begin(), nums.end());

        int freq = 1;
        int ans = nums[0];

        for(int i=1; i<len; i++){
            if(nums[i] == nums[i-1]){
                freq++;
            }
            else{
                freq=1;
                ans = nums[i];
            }

            if(freq > len/2){
                return ans;
            }
        }
        return ans;
    }
};