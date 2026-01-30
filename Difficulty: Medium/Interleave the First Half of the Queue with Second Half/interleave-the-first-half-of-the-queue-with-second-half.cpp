class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
           vector<int>s;
           
           while (!q.empty()){
                 
                  s.push_back(q.front());
                  q.pop();
                  
           }
           int n = s.size();
           int i=0;
           int j=n/2;
   
           while (j<n){
                 q.push(s[i]);
                 q.push(s[j]);
                 i++;
                 j++;
           }
           
           
           
          
    }
};