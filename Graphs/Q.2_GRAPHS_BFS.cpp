//BFS

https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/

class Solution {
public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
        
        int i,j,k;
        
        int visited[V+1]={0};
        
        vector<int> ans;
        
        queue<int> q;
        
        q.push(0);
        visited[0]=1;
        
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            
            ans.push_back(u);
            
            for(auto e:adj[u])
            {
                if(!(visited[e]))
                {
                    q.push(e);
                    visited[e]=1;
                }
            }
        }
        
        return ans;
	}
};