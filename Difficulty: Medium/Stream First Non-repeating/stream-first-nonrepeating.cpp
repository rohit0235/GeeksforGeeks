class Solution {
  public:
    string firstNonRepeating(string &s) {
          
          vector<int>ch(26,0);
          queue<char>q;
          for(int i=0;i<s.size();i++){
                ch[s[i]-'a']++;
                q.push(s[i]);
                while (!q.empty() && ch[q.front()-'a']>1){
                     q.pop();
                }
                if(!q.empty()){
                     s[i] = q.front();
                }else{
                        s[i] = '#';
                }
                
          }
          
          return s; 
          
    }
};