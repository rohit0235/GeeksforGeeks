class Solution {
  public:
    int minCost(string &s, string &t, vector<vector<char>> &transform,
                vector<int> &cost) {
        // code here
             
           vector<vector<int>>dist(26,vector<int>(26,1e8));
           
           for(int i=0;i<26;i++) dist[i][i]=0;
           
           for(int i=0;i<transform.size();i++){
                 
                  int u = transform[i][0]-'a';
                  int v= transform[i][1]-'a';
                  
                  dist[u][v]= min(dist[u][v], cost[i]);
                 
           }
              
            for (int k = 0; k < 26; k++) {
  
                for (int i = 0; i < 26; i++) {
                    for (int j = 0; j < 26; j++) {
                        if(dist[i][k] != 1e8 && dist[k][j]!= 1e8)
                          dist[i][j] = min(dist[i][j],dist[i][k] + dist[k][j]);
                    }
                }
            }
             
            int ans =0;
            
            for(int i=0;i<s.size();i++){
                 
                    int f = s[i]-'a';
                    int se = t[i]-'a';
                     if (f==se){
                          continue;
                     }  
                    int mini = 1e8;
                    for(int j=0;j<26;j++){
                           
                            if (dist[f][j]!=1e8 && dist[se][j]!=1e8 ){
                                  mini = min(mini,dist[f][j]+dist[se][j]);
                            }
                    }
                    
                    int check = dist[f][se];
                    if (mini ==1e8){
                         return -1;
                    }
               
              
                    ans+=mini;
                        //   cout<<ans<<" ";
                
            }
            
            return ans;
             
    }
};