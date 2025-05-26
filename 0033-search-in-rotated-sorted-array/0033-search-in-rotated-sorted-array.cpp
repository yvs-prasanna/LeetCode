class Solution {
public:

    int search(vector<int>& nums, int target) {
        bool flag = false;
        int k = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                flag = true;
                k = i;
            }
        }
        if (flag == false){
            return -1;
        }
        return k;
        
    }
};