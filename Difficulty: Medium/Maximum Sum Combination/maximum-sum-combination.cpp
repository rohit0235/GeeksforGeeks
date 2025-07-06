class Solution {
  public:
    vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
                   
     
               sort(a.rbegin(), a.rend());
               sort(b.rbegin(), b.rend());
        
               
               int n = a.size();
               priority_queue<pair<int,pair<int,int>>>pq;
               pq.push({a[0]+b[0],{0,0}});
               // to store the index of sum  
             set<pair<int,int>>st;
            //   int ans= 0;
            vector<int>ans;
               st.insert({0,0});
               for(int i=0;i<k && !pq.empty();i++){
                     
                         
                   auto top = pq.top();
                   pq.pop();
                   int ele =top.first;
                   
                   
                   int ap= top.second.first;
                   int bp = top.second.second;
                   
                      ans.push_back(ele);
                   
                   if (ap+1<a.size() && !st.count({ap+1,bp})){
                          
                           pq.push({a[ap+1]+b[bp],{ap+1,bp}});
                           st.insert({ap+1,bp});
                         
                   }
                       
                   
                   if (bp+1<b.size() && !st.count({ap,bp+1})){
                          
                           pq.push({a[ap]+b[bp+1],{ap,bp+1}});
                           st.insert({ap,bp+1});
                         
                   }
                       
                       
                        
                        
               }
               
               
               return ans;
               
                
                   
                   
    }
};