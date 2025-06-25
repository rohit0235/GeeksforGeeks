class Solution {
  public:
    int minValue(string &s, int k) {
                 
                 int n =s.size();
                 
                 int count =0;
                 vector<int>ch(26,0);
                 for(char i:s) ch[i-'a']++;
                 priority_queue<int>pq;
                 
                 for(int i:ch) pq.push(i);
                 
                 while(!pq.empty() && count<k){
                      
                      count++;
                      int top=pq.top();
                      pq.pop();
                      
                      if (top>1) pq.push(top-1);
                 }
                 
                 
                 int ans =0;
                 while (!pq.empty()){
                      
                      ans+=(pq.top()*pq.top());
                      pq.pop();
                 }
                 
                 return ans;
                 
    }
};