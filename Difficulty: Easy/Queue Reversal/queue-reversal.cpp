class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        int n = q.size();
        stack<int>q2;
        for(int i=0;i<n;i++){
             q2.push(q.front());
             q.pop();
        }
       while(!q2.empty()){q.push(q2.top());q2.pop();}
    }
};