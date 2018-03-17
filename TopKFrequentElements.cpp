class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;
        vector<int> result;
        for (auto num : nums)
        {
            freq.insert(make_pair(num, freq[num]++));
        }
        for (int i = 0; i < k; i++)
        {
            auto max = max_element(freq.begin(), freq.end(), [](const pair<int, int>& p1, const pair<int, int>& p2) { return p1.second < p2.second; });
            result.push_back((*max).first);
            (*max).second = 0;
        }
        return result;
    }
};