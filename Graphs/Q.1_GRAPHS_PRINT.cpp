//PRINTING A GRAPH

//https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1

class Solution {
public:
	vector<vector<int>>printGraph(int V, vector<int> adj[]){
	    
	    int i,j,k;
	    
	    vector<vector<int>>v(V);
	    
	    for(i=0;i<V;++i)
	    {
	        v[i].push_back(i);
	        
	        for(j=0;j<adj[i].size();++j)
	            v[i].push_back(adj[i][j]);
	    }
	    
	    return v;
	}
};