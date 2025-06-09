class Solution {
public:
    int partition(vector<int>& arr, int low, int high){
        int i = low;
        int j = high;
        while(i < j){
            while(arr[i] <= arr[low] && (i <= high - 1)){
                i++;
            }
            while(arr[j] > arr[low] && (j >= 1)){
                j--;
            }
            if(i < j){
                swap(arr[i] , arr[j]);
            }
        }
        swap(arr[j], arr[low]);
        return j;
    }
    void quick_sort(vector<int> & nums , int low, int high){
        if(low < high){
            int j = partition(nums, low, high);
            quick_sort(nums, low, j -1);
            quick_sort(nums, j+1, high);
        }
        else{
            return;
        }
    }
    void sortColors(vector<int>& nums) {
        quick_sort(nums, 0 , nums.size() - 1);        
    }
};