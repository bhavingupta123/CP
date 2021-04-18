//https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1#

class Solution {
public:

   bool isCyclicUtil(int v, vector<int> adj[], bool visited[], bool recStack[]) {
    
    visited[v] = true;
    recStack[v] = true;
    
    for (auto i : adj[v]) {
        if (!visited[i] && isCyclicUtil(i, adj, visited, recStack))
            return true;
        else if (recStack[i])
            return true;
    }
    
    recStack[v] = false;
    return false;
}

	bool isCyclic(int V, vector<int> adj[]) {
	   	
	   	bool *visited = new bool[V];
        bool *recStack = new bool[V];
        for (int i = 0; i < V; ++i) {
            visited[i] = false;
            recStack[i] = false;
        }
        for (int i = 0; i < V; ++i)
            if (!visited[i] && isCyclicUtil(i, adj, visited, recStack))
                return true;
    return false;
	   	
	}
};