class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        int n=str.size();
        string newstr="";
        int i=n-1;
        int j=n-1;
        while (i>=0){
            while (i>=0 && str[i]!='.' ){
                i--;
            }
   
            string news=str.substr(i+1,j-i);
           
            newstr+=news;
             if (!newstr.empty() && i>0){ 
            newstr += ".";  // Add dot between words
        }
           j=i-1;
            i=j;
        }
        return newstr;
        
    }
};
