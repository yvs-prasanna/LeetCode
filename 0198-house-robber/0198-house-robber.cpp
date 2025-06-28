class Solution {
public:
    int rob(vector<int>& nums) {
        int p2 = nums[0];
        int n = nums.size();
        if(n == 1) return nums[0];
        int p1 = max(nums[0], nums[1]);
        for(int i=2; i<n; i++){
            int pick = nums[i] + p2;
            int not_pick = p1;
            int curr = max(pick, not_pick);
            p2 = p1;
            p1 = curr;
        }
        return p1;
    }
};