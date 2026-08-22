class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;

        vector<int> ans;
        for(int i=0; i<n; i++){
            int rest = target - nums[i];
            if(mp.find(rest) != mp.end()){
                ans.push_back(mp[rest]);
                ans.push_back(i);
            }
            mp[nums[i]] = i;
        }   

        return ans;
    }
};