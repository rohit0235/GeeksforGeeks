class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
          
              int i=0;
              int j=0;
              
              int n=  s1.size();
              int m =s2.size();
              
              while (i<n && j<m){
                    if (s1[i]==s2[j]){
                         i++;
                    }
                    j++;
              }
              
              return i>=n;
          
          
    }
};