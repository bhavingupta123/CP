//https://practice.geeksforgeeks.org/problems/level-of-nodes-1587115620/1

class Solution{
	public:
	int nodeLevel(int V, vector<int> adj[], int X) {
	    
	    int i,j,k,l=0,level[V],x=0;
	    
	    int visited[V]={0};
	    queue<int> q;
	    
	    if(X>=V)
	        return -1;
	    
	    q.push(x);
	    level[x]=0;
	    visited[x]=1;
	    
	    while(!q.empty())
	    {
	        int x = q.front();
	        q.pop();
	        
	        for(i=0;i<adj[x].size();++i)
	        {
	            int b = adj[x][i];
	            
	            if(!visited[b])
	            {
	                level[b] = level[x]+1;
	                
	                q.push(b);
	                visited[b]=1;
	            }
	        }
	    }
	    
	    return level[X];
	    
	}
};