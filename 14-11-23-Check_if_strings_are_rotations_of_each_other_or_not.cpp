/*
Problem Description: Check if strings are rotations of each other or not


You are given two strings of equal lengths, s1 and s2. The task is to check if s2 is a rotated version of the string s1.

Note: The characters in the strings are in lowercase.

Example 1:

Input:
geeksforgeeks
forgeeksgeeks
Output: 
1
Explanation: s1 is geeksforgeeks, s2 is
forgeeksgeeks. Clearly, s2 is a rotated
version of s1 as s2 can be obtained by
left-rotating s1 by 5 units.

Example 2:

Input:
mightandmagic
andmagicmigth
Output: 
0
Explanation: Here with any amount of
rotation s2 can't be obtained by s1.
Your Task:
You don't have to read or print anything. The task is to complete the function areRotations() which takes two strings, s1 and s2 as inputs and checks if the two strings are rotations of each other. The function returns true if s1 can be obtained by rotating s2, else it returns false.

Expected Time Complexity: O( |s1| ).
Expected Space Complexity: O( |s1| ).

Constraints:
1 <= |s1|, |s2| <= 10^5

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.length()!=s2.length())
            return false;
        if(s1==s2)
            return true;
            
        s1 = s1+s1;
        
        if(s1.find(s2,0)==-1)
            return false;
        else
            return true;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends
