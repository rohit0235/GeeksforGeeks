class Solution
{
public:
    string removeKdig(string &s, int k)
    {

          stack<char> st;

        for (char c : s) {
            while (!st.empty() && st.top() > c && k > 0) {
                st.pop();
                k--;
            }
            st.push(c);
        }

        // remove remaining k digits
        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }

        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());

        // remove leading zeros
        int idx = 0;
        while (idx < ans.size() && ans[idx] == '0') idx++;

        ans = ans.substr(idx);

        return ans.empty() ? "0" : ans;

    }
};