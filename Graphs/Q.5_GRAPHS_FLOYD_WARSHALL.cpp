//https://practice.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1#

class Solution {
public:
	void shortest_distance(vector<vector<int>>&matrix){
	    int n = matrix.size();
	    
	    int i,j,k;
	    
	    for(k=0;k<n;++k)
	    {
	        for(i=0;i<n;++i)
	        {
	            for(j=0;j<n;++j)
	            {
	                if(matrix[i][j]>(matrix[i][k] + matrix[k][j]) && matrix[i][k]!=-1 && matrix[k][j]!=-1 && matrix[i][j]!=-1)
	                    matrix[i][j] = matrix[i][k] + matrix[k][j];
	            }
	        }
	    }
	}
};