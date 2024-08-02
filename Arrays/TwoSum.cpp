#define pii pair<int, int>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pii> arr;
        int n = nums.size();

        for(int i=0; i<n; i++) {
            arr.push_back({nums[i], i});
        }

        sort(begin(arr), end(arr));

        int l = 0, r = n - 1;
        vector<int> ans;

        while(l < r) {
            int sum = arr[l].first + arr[r].first;
            if(sum < target) l++;
            else if(sum > target) r--;
            else{
                ans.push_back(arr[l].second);
                ans.push_back(arr[r].second);
                break;
            }
        }

        return ans;
    }
};