class Solution {
  public:
    
 #define pik pair<int,int>
    #define pi pair<int, pik>
   
    vector<vector<int>> kSmallestPair(vector<int> &arr1, vector<int> &arr2, int k) {
           int n= arr1.size();
           int m= arr2.size();
           
           priority_queue<pi,vector<pi>,greater<pi>>pq;
          set<pair<int,int>>st;
           pq.push({arr1[0]+arr2[0],{0,0}});
                  st.insert({0,0});
           vector<vector<int>>ans;
           while (!pq.empty() && ans.size()<k){ 
              
               auto top = pq.top();
               pq.pop();
          
               
               int i = top.second.first;
               int j = top.second.second;
                    ans.push_back({arr1[i],arr2[j]});
               if (i+1<n && !st.count({i+1,j})){
                        st.insert({i+1,j});
                        pq.push({arr1[i+1]+arr2[j],{i+1,j}});
               }
               if (j+1<n && !st.count({i,j+1})){
                        st.insert({i,j+1});
                        pq.push({arr1[i]+arr2[j+1],{i,j+1}});
               }
               
           }
        //   for(auto i:ans){
        //         cout<<i[0]<<" "<<i[1]<<endl;
        //   }
           return ans;
    }
};
