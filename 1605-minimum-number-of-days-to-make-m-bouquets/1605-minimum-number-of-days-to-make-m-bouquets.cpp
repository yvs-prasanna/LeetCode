class Solution {
public:
    int no_of_bouquets(vector<int> arr, int n, int mid, int k){
        int count = 0;
        int no_of_bouquets = 0;
        for(int i=0; i<n; i++){
            if(arr[i] <= mid){
                count++;
                if(count == k){
                    no_of_bouquets++;
                    count = 0;
                }
            }
            else{
                count = 0;
            }
        }
        return no_of_bouquets;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(n*k < m) return -1;
        int low = 1;
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(no_of_bouquets(bloomDay,n, mid, k) >= m){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};