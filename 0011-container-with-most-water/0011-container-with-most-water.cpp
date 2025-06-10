class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int low = 0;
        int high = n-1;
        int maxi = 0;
        while(low <= high){
            int length = high - low;
            int breadth = 0;
            if(height[low] < height[high]){
                breadth = height[low];
            }
            else{
                breadth = height[high];
            }
            int area = length * breadth;
            if(area > maxi){
                maxi = area;
            }
            if(height[high] > height[low]){
                low += 1;
            }
            else{
                high -= 1;
            }
        }
        return maxi;
    }
};