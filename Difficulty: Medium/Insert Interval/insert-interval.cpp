class Solution {
  public:
  
  
    vector<vector<int>> mergeintervals(vector<vector<int>>&intervals){
                  
                   
                   vector<vector<int>>ans;
                   int j=0;
                   ans.push_back(intervals[0]);
                          int n = intervals.size();
                    while (j<n){
                               
                               
                               if (ans.back()[1]>=intervals[j][0]){
                                        ans.back()[1]= max(ans.back()[1],intervals[j][1]);
                                                    
                               }    
                               
                               else{
                                     ans.push_back(intervals[j]);
                               }
                               
                               
                               j++;
                   }
                   
                   return ans;
                     
                     
              
    }
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &ninter) {
        // code here
        
            int n = intervals.size();
            bool flag =false;
            for(int i=0;i<n;i++){
                    
                    if (ninter[0] < intervals[i][0]) {
                            intervals.insert(intervals.begin() + i, ninter);
                            flag = true;
                            break;
                        }
                     
                     
            }
            
            
            if (!flag){ 
              
                 intervals.push_back(ninter);    
            }
            // return intervals;
          vector<vector<int>> ans =  mergeintervals(intervals);
        
            return ans;
        
    }
};