class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
          int total = 0;
        int n = arr.size();
        stack<pair<int, int>> st;
        vector<int> psee;
        vector<int> nse;
        for(int i=0;i<n;i++) {
            while(!st.empty() && st.top().first>arr[i])
                st.pop();
            if(st.empty())
                psee.push_back(-1);
            else
                psee.push_back(st.top().second);
        
            st.push({arr[i], i});
        }
        
        while(!st.empty())
            st.pop();
            
        for(int i=(n-1);i>=0;i--) {
            while(!st.empty() && st.top().first>=arr[i])
                st.pop();
            if(st.empty())
                nse.push_back(n);
            else
                nse.push_back(st.top().second);
            st.push({arr[i], i});
        }
        reverse(nse.begin(), nse.end());
        
        int p = 0;
        int ns = 0;
        for(int i=0;i<n;i++)
        {
            p = i - psee[i];
            ns = nse[i] - i;
            
            total = total + (p*ns*arr[i])%1000000007;
        }
        
        return total;
               
                
        
    }
};