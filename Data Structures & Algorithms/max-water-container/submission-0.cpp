class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
         int left = 0;
        int right = n-1;
        int  max_area = 0;
        while(left<right){
            int width = right - left ;
            int container_height = min(heights[left],heights[right]);
            int area = width * container_height;
             max_area = max(max_area, area);
            if(heights[left]<heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return max_area ;

    }
};
