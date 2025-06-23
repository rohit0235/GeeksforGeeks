class Solution {
  public:

string addStrings(string num1, string num2) {
    string result = "";
    int i = num1.length() - 1;
    int j = num2.length() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int n1 = (i >= 0) ? num1[i] - '0' : 0;
        int n2 = (j >= 0) ? num2[j] - '0' : 0;
        int sum = n1 + n2 + carry;
        carry = sum / 10;
        result += (sum % 10) + '0';
        i--;
        j--;
    }

    // Manually reverse the result string
    int left = 0, right = result.length() - 1;
    while (left < right) {
        char temp = result[left];
        result[left] = result[right];
        result[right] = temp;
        left++;
        right--;
    }

    // Remove leading zeros
    int start = 0;
    while (start < result.length() - 1 && result[start] == '0') {
        start++;
    }
    string finalResult = "";
    for (int k = start; k < result.length(); k++) {
        finalResult += result[k];
    }

    return finalResult;
}
    string minSum(vector<int> &arr) {
        // code here
        int n =arr.size();
        // if (n==1) return "0";
        
        sort(arr.begin(),arr.end());
        
        string check ="";
        string check2 ="";
        
        for(int i=0;i<n;i+=2){
              
             char f =arr[i]+'0';
             
              if (i<n) check.push_back(f);
          
               
              if ((i+1)<n)  {
                  char s =arr[i+1]+'0';
                  check2.push_back(s);
                  
              }
        }
        
        
        return addStrings(check,check2);
        
        
        
        
        
        
        
        
        
        
        // // cout<<check2;
        
        // int a = stoi(check);
        // int b = stoi(check2);
        
        // return to_string(a+b);
        // return "0";
        
        // 2 3 5
        // 2 3 4
        // 4 6 9
        
        // 2 3 4  5 6 8
        //  5 3 0 7 4
        
        
        // 0 3 4 7 5
        // 045+37
        
        
    }
};