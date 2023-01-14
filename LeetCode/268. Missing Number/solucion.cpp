class Solution {
public:
    int binarySearch(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        while(end >= start){
            int mid = (start+end)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) end = mid-1;
            else start = mid+1;
        }
        return -1;
    }
    
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        for(int i=0; i <= size; i++){
            if(binarySearch(nums, i) < 0) return i; 
        }
        return -1;
    }
};
