// Last updated: 05/08/2026, 11:22:00
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_area = 0;

        while (left < right) {
            int current_height = (height[left] < height[right]) ? height[left] : height[right];
            
            int current_area = (right - left) * current_height;
            
            max_area = (current_area > max_area) ? current_area : max_area;

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_area;
    }
};