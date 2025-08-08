class Solution {
  public:
    long long maxDiamonds(vector<int>& arr, int k) {
        // code here
        
        priority_queue<int>pq(arr.begin(),arr.end());
        int sum =0;
        while (k-- && !pq.empty()){
            int top = pq.top();
             sum+=pq.top();
             pq.pop();
             
             pq.push(top/2);
             
        }
        
        return sum;
        
    }
};