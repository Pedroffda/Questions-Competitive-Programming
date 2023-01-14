#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid = nums.size()/2;
        // cout << "mid:" << mid << " " << nums[mid] << endl;
        if(mid > 0){
            if(nums[mid] == target) return mid;
            if(nums[mid]>target){
                vector<int> sub_inf = {nums.begin(), nums.end()-mid};
                return searchInsert(sub_inf, target);
            }
            if(nums[mid]<target){
                vector<int> sub_sup = {nums.begin()+mid, nums.end()};
                return mid + searchInsert(sub_sup, target);    
            }
        }if(mid==0){
            if(nums[mid] >= target) return mid;
        }
        return mid+1;
    }
};
