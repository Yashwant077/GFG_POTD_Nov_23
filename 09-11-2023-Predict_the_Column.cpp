/*
Problem Description: Predict the Column

Given a matrix(2D array) M of size N*N consisting of 0s and 1s only. The task is to find the column with maximum number of 0s. If more than one column exists, print the one which comes first. If the maximum number of 0s is 0 then return -1.

Example:

Input:
N = 3
M[][] = {{0, 0, 0},
          {1, 0, 1},
          {0, 1, 1}}
Output:
0
Explanation:
0th column (0-based indexing) is having 2 zeros which is maximum among all columns and comes first.
Your Task:
Your task is to complete the function columnWithMaxZero() which should return the column number with the maximum number of zeros. 

Expected Time Complexity: O(N * N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 10^3
0 <= A[i][j] <= 1

*/

//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
        int count=0;
        int maxi=-1;
        int index;
        int check=0;
        for(int i=N-1;i>-1;i--){
            count=0;
            for(int j=0;j<N;j++){
                if(arr[j][i]==0)
                count++;
                else 
                check++;
            }
            if(maxi<=count){
                maxi=count;
                index=i;
            }
        }
        
        if(check>=N*N)
        return -1;
        else
        return index;
        
    }
};

//{ Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    vector<vector<int>>arr(N,vector<int>(N));
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	        for(int j = 0;j<N;j++){
	            int x;
	            cin >> x; 
	            arr[i][j]=x;
	        }
	    }
	    Solution ob;
	    cout << ob.columnWithMaxZeros(arr,N) << endl;
	}
	
	return 0;
}
// } Driver Code Ends
