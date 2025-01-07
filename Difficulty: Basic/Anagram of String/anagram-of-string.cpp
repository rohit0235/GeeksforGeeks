//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
            
            vector<int>s(26,0);
            
            for (char i:str1){
                s[i-'a']++;
            }
            for (char i:str2){
                s[i-'a']--;
            }
            int count=0;
            for (int i=0;i<26;i++){
                count+=abs(s[i]);
            }
            return count;
            
            
            
            //   unordered_map<int,int>mp1;
            //   unordered_map<int,int>mp2;
            //   if (str1.size()<str2.size()) swap(str1,str2);
            //   for (char i:str1) mp1[i]++;
            //   for (char i:str2) mp2[i]++;
            //   int count=0;
            //   for (auto  i:mp1){
            //       char ch=i.first;
            //       count+=abs(mp2[ch]-mp1[ch]);
            //   }
             
            //   return count;
              
}