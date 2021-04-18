//DFS

//https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1#

class Solution {
public:
	vector<int>dfsOfGraph(int V, vector<int> adj[]){

        int i,j,k;
        
        stack<int> s;
        vector<int> ans;
        int visited[V+1] = {0};
        s.push(0);
    
        while(!s.empty())
        {
            int u = s.top();
            s.pop();
            
            if(visited[u])
                continue;
            
            ans.push_back(u);
            visited[u]=1;
            
            for(i=adj[u].size() -1 ;i>=0 ; --i)
            {
                if(!visited[adj[u][i]])
                {
                    s.push(adj[u][i]);
                }
            }
        }
        
        return ans;
        
	}
};