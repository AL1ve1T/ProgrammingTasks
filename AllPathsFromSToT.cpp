class Solution {
public:
    vector<int> way;
    vector<vector<int>> ways;
    
    void dfs(vector<vector<int>>& graph, int pos)
    {
        if (pos == graph.size() - 1)
        {
            way.push_back(pos);
            ways.push_back(way);
            way.pop_back();
        }
        way.push_back(pos);
        
        for (auto node : graph[pos])
        {
            dfs(graph, node);
        }
        way.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs(graph, 0);
        return ways;
    }
};