class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen{}; //{value : index}
        int diff {};

        for(int i=0;i<nums.size();i++){
            diff = target - nums[i];
            if(seen.contains(diff)){
                return vector<int>{seen[diff], i};
            }
            seen[nums[i]] = i;
        }
    }
};
