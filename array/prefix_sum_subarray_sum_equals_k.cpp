// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
// A subarray is a contiguous non-empty sequence of elements within an array.

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int prefixSum=0;
        int count =0;
        mp[0]=1;
        for(auto num:nums){
            prefixSum=prefixSum+num;
            if(mp.find(prefixSum-k)!=mp.end()){
                count=count+mp[prefixSum-k];
            }
            mp[prefixSum]++;
        }
        return count;
    }
};