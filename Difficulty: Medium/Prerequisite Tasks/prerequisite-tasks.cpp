class Solution {
  public:
    bool isPossible(int N, int P, vector<pair<int, int> >& pre) {
        // Code here
          
          
             unordered_map<int,vector<int>>adj;
             vector<int>indegree(N,0);
             for(auto i:pre){
    
                            adj[i.second].push_back((i.first));
                            indegree[i.first]++;
                           
                          
             
             }
             queue<int>q;
             int count=0;
             for(int i=0;i<N;i++){
                  if (indegree[i]==0) {q.push(i);}
             }
             
             
             while (!q.empty()){
                  
                     int top = q.front();
                     
                     q.pop();
                     
                     count++;
                     for(auto v:adj[top]){
                           
                           indegree[v]--;
                           if (indegree[v]==0) q.push(v);
                           
                     }
             }
             
             return count==N;
           
         
        
    }
};