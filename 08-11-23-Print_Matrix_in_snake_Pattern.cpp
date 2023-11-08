/*
Problem Description: Print Matrix in snake Pattern

Given a matrix of size N x N. Print the elements of the matrix in the snake like pattern depicted below.


Example 1:

Input:
N = 3 
matrix[][] = {{45, 48, 54},
             {21, 89, 87}
             {70, 78, 15}}
Output: 
45 48 54 87 89 21 70 78 15 
Explanation:
Matrix is as below:
45 48 54
21 89 87
70 78 15
Printing it in snake pattern will lead to 
the output as 45 48 54 87 89 21 70 78 15.

Example 2:

Input:
N = 2
matrix[][] = {{1, 2},
              {3, 4}}
Output: 
1 2 4 3
Explanation:
Matrix is as below:
1 2 
3 4
Printing it in snake pattern will 
give output as 1 2 4 3.
Your Task:
You dont need to read input or print anything. Complete the function snakePattern() that takes matrix as input parameter and returns a list of integers in order of the values visited in the snake pattern. 

Expected Time Complexity: O(N * N)
Expected Auxiliary Space: O(N * N) for the resultant list only.

Constraints:
1 <= N <= 10^3
1 <= mat[i][j] <= 10^9

*/

//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > mat)
    {   
        // code here
        
        int row = mat.size();
        int col = mat[0].size();
        vector<int> ans;
        
        for(int i=0; i<row; i++){
            if(i%2==0){
                for(int j=0; j<col; j++){
                    ans.push_back(mat[i][j]);
                }
            }
            else{
                for(int j=col-1; j>=0; j--)
                    ans.push_back(mat[i][j]);
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.snakePattern(matrix);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
