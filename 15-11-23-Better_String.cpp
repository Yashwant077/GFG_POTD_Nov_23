/*
Problem Description: Better String

Given a pair of strings of equal lengths, Geek wants to find the better string. The better string is the string having more number of distinct subsequences.
If both the strings have equal count of distinct subsequence then return str1.

Example 1:

Input:
str1 = "gfg", str2 = "ggg"
Output: "gfg"
Explanation: "gfg" have 6 distinct subsequences whereas "ggg" have 3 distinct subsequences. 

Example 2:

Input: str1 = "a", str2 = "b"
Output: "a"
Explanation: Both the strings have only 1 distinct subsequence. 
Your Task:
You don't need to read input or print anything. Your task is to complete the function betterString() which takes str1 and str2 as input parameters and returns the better string.

Expected Time Complexity: O( max( str1.length, str2.length ) )

Expected Auxiliary Space: O( max( str1.length, str2.length ) )

Constraints:
1 <= str1.length , str2.length <= 30

*/


//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int dp[2001];
    int mod = 1e9+7;
    int fn(string &s, int i)
    {
        if(i==s.length())
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        vector<int> vis(26,0);
        int  ans = 0;
        for(int j=i;j<s.length();j++)
        {
            if(vis[s[j]-'a'])
                continue;
            vis[s[j]-'a'] = 1;
            ans = (ans + 1 + fn(s,j+1))%mod;
        }
        return dp[i] = ans;
    }
    int distinct(string s) {
        memset(dp,-1,sizeof(dp));
        return fn(s,0);
    }
    string betterString(string str1, string str2) {
        // code here
        int a = distinct(str1);
        int b = distinct(str2);
        if(a>=b)return str1;
        return str2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

// } Driver Code Ends
