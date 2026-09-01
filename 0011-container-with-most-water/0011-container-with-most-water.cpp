class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int left = 0;
        int right = height.size() - 1;
        int currWater = 0;
        int wdt, ht;

        while(left < right){
            wdt = right - left;
            ht = min(height[left], height[right]);
            currWater = wdt * ht;

            maxWater = max(maxWater, currWater);

            if(height[left] < height[right]){
                left ++;
            }

            else{
                right--;
            }
        }
        return maxWater;
    }
};