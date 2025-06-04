class Solution {
  public:
      
      int a,b,c;
           int t[101][101][101];
     
    int solve(string& s1, string& s2, string& s3, int i , int j , int k) {
            
            if  (i>=a || j>=b ||  k>=c) return 0;
            if (t[i][j][k]!=-1) return t[i][j][k];
            if (s1[i]==s2[j] && s2[j]==s3[k]) return 1+solve(s1,s2,s3,i+1,j+1,k+1);
            // if (s1[i]==s2[j] && s2[j]!=s3[k]) return solve(s1,s2,s3,i+1,j+1,k);
            // if (s1[i]!=s2[j] && s2[j]==s3[k]) return solve(s1,s2,s3,i,j+1,k+1);
            // if (s1[i]==s3[k] && s2[j]!=s3[k]) return solve(s1,s2,s3,i+1,j,k+1);
            
            int choice1 = solve(s1,s2,s3,i+1,j,k);
            int choice2 = solve(s1,s2,s3,i,j+1,k);
            int choice3 = solve(s1,s2,s3,i,j,k+1);
            
            
            return t[i][j][k]=max(choice1, max(choice2, choice3));
            
            
         
    }
     
     
    int lcsOf3(string& s1, string& s2, string& s3) {
        // Code here
         a=s1.size();
         b=s2.size();
         c=s3.size();
         
       memset(t,-1,sizeof(t)); 
        return solve(s1,s2,s3,0,0,0);
        
    }
};
