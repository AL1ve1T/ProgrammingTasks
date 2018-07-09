class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> gist;
        
        for (int i = 0;i < nums.size(); i++) {
            if (gist.count(nums[i]) > 0) {
                gist[nums[i]]++;
            } else {
                gist.insert(make_pair(nums[i], 1));
            }
        }
        vector<int> result;
        for (auto it = gist.begin(); it != gist.end(); it++) {
            if (it->second == 2) {
                result.push_back(it->first);
            }
        }
        return result;
    }
};