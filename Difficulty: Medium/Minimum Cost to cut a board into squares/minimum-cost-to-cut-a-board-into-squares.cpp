class Solution {
  public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        //  code here
                
                 int vs =1;
                 int hs =1;
                 int cost =0;
                 
                 priority_queue<pair<int,int>>pq;// 0 for vertival and 1 for horizental 
                 
                 for(int i:x)pq.push({i,0});
                 for(int i:y)pq.push({i,1});
                 
                 while (!pq.empty()){
                        
                          pair<int,int>top = pq.top();
                          pq.pop();
                          if (top.second ==0){
                                 cost+=top.first*hs;
                                 vs++;
                          }
                          else{
                               cost+=top.first*vs;
                               hs++;
                          }
                        //   cout<<cost<<endl;
                        
                 }
                 
                 return cost;
                  
                  
                   
                   
    }
};
