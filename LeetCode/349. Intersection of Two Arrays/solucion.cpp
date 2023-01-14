#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        while(end >= start){
            int mid = (start+end)/2;
            // cout << "mid:" << mid << " " << nums[mid] << endl;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) end = mid-1;
            else start = mid+1;
        }
        return -1;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(), nums2.end());
        int start = 0;
        int end = nums2.size()-1;
        set<int> sol;
        while(!nums1.empty()){
            int curr = nums1.back();
            nums1.pop_back();
            if(binarySearch(nums2, curr)>=0) sol.insert(curr);
        }
        vector<int> s;
        for(auto i: sol) s.push_back(i); 
        return s;
    }
};
