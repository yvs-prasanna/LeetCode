class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low = 0;
        int rows = mat.size();
        int cols = mat[0].size();
        int high = cols - 1;
        vector<int> res;
        while(low <= high){
            int mid = (low + high) / 2;
            int maxi = INT_MIN;
            int maxRow = 0;
            for(int i=0; i<rows; i++){
                if(mat[i][mid] > maxi){
                    maxi = mat[i][mid];
                    maxRow = i;
                }
            }
            int left = -1;
            int right = -1;
            int top = -1;
            int bottom = -1;
            if(mid > 0){
                left = mat[maxRow][mid - 1];
            }
            if(mid < cols - 1){
                right = mat[maxRow][mid+1];
            }
            if(maxRow > 0){
                top = mat[maxRow - 1][mid];
            }
            if(maxRow < rows - 1){
                bottom = mat[maxRow + 1][mid];
            }
            int ele = mat[maxRow][mid];
            if((ele > left) && (ele > right) && (ele > top) && (ele > bottom)){
                res.push_back(maxRow);
                res.push_back(mid);
                return res;
            }
            if(ele < left){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return {-1, -1};
    }
};