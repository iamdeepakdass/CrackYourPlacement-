class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();
        int ans = 0;
        long long sum = 0;
        unordered_map<long long, int> preSum;
        preSum[0] = 1;
        
        for(int i=0; i<n; i++) {
            sum += nums[i];
            long long rem = sum - k;

            if(preSum.find(rem) != preSum.end()) {
                ans += preSum[rem];
            }

            preSum[sum]++;
        }

        return ans;
    }
};