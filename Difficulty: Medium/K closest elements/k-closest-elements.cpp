class Solution {
  public:
  
 struct MyComparator {
        bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) const {
            if (a.first == b.first) {
                return a.second <= b.second;
            }
            else{
                 return a.first>b.first;
            }

            // return a.first < b.first;
        }
    };
  
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        // Code here
         
         priority_queue<pair<int,int>,vector<pair<int,int>> , MyComparator>pq;
         
         for(int i:arr){
              
                if (i==x) continue;
                
                 pq.push({abs(i-x),i});
               
         }
         vector<int>ans;
         
         while (!pq.empty() && k--){
             
              int front =pq.top().second;
              ans.push_back(front);
              pq.pop();
              
         }
         
         return ans;
         
    }
};