class Solution {
public:
    vector<int> visitedVtx;
    
    bool dfs(vector<vector<int>>& graph, int currentVtx)
    {
        if(find(visitedVtx.begin(), visitedVtx.end(), currentVtx) != visitedVtx.end())
        {
            return false;
        }
        
        visitedVtx.push_back(currentVtx);
        
        for (auto node : graph[currentVtx])
        {
            if (!dfs(graph, node))
            {
                visitedVtx.pop_back();
                return false;
            }
        }
        visitedVtx.pop_back();
        return true;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> result;
        for (int i = 0; i < graph.size(); i++)
        {
            if (dfs(graph, i))
            {
                result.push_back(i);
            }
            visitedVtx.erase(visitedVtx.begin(), visitedVtx.end());
        }
        return result;
    }
};