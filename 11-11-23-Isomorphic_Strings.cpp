/*
Problem Description: Isomorphic Strings

Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.

If the characters in str1 can be changed to get str2, then two strings, str1 and str2, are isomorphic. A character must be completely swapped out for another character while maintaining the order of the characters. A character may map to itself, but no two characters may map to the same character.

Example 1:

Input:
str1 = aab
str2 = xxy
Output: 
1
Explanation: 
There are two different characters in aab and xxy, i.e a and b with frequency 2 and 1 respectively.

Example 2:

Input:
str1 = aab
str2 = xyz
Output: 
0
Explanation: 
There are two different characters in aab but there are three different charactersin xyz. So there won't be one to one mapping between str1 and str2.
Your Task:
You don't need to read input or print anything.Your task is to complete the function areIsomorphic() which takes the string str1 and string str2 as input parameter and  check if two strings are isomorphic. The function returns true if strings are isomorphic else it returns false.

Expected Time Complexity: O(|str1|+|str2|).
Expected Auxiliary Space: O(Number of different characters).
Note: |s| represents the length of string s.

Constraints:
1 <= |str1|, |str2| <= 10^5

*/

//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
         if( str1.size() != str2.size())
            return false;
        
        vector<pair<char,char>> temp1,temp2;
        for ( int i =0 ; i < str1.size() ; i++)
        {
            temp1.push_back({str1[i],str2[i]});
            temp2.push_back({str2[i],str1[i]});
        }
            
        set<char> x1,y1;
        set<pair<char,char>> x2,y2;
         for ( int i = 0; i < str1.size() ; i++)
        {
            x1.insert(str1[i]); 
            x2.insert(temp1[i]);
            
            y1.insert(str2[i]);
            y2.insert(temp2[i]);
        }        
            
        if ( x1.size() == x2.size()  &&   y1.size() == y2.size() )
            return true;
        else
            return false;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends
