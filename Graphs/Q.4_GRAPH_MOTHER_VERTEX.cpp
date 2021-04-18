//https://practice.geeksforgeeks.org/problems/mother-vertex/1#

class Solution {
public:

    void dfs(int v , vector<int> &visited,vector<int> adj[])
    {
        visited[v]=1;
        for(auto i = adj[v].begin(); i != adj[v].end(); ++i)
        {
            if (!visited[*i])
                dfs(*i, visited,adj);
        }
    }
    
	int findMotherVertex(int V, vector<int>adj[]){
	    
	    int i,j,k,v=0;
	    
	    vector<int> visited(V+1,0);
	    
	    for(i=0;i<V;++i)
	    {
	        if(!visited[i])
	        {
	            dfs(i,visited,adj);
	            v = i;
	        }
	    }
	    
        fill(visited.begin(), visited.end(), 0);	 
    
	    dfs(v,visited,adj);
	    
	    for (i=0; i<V; i++)
            if (!visited[i])
            return -1;
 
        return v;
	}

};