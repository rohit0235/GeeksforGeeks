//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {      
              int i=0;
              string st="";
              int sum=0;
              int n =str.size();
              while (i<n){
                  
                  if (i<n && isdigit(str[i])){
                      st+=str[i];
                      i++;
                  }
                  else{
                      if (st.size()!=0)
                       sum+=stoi(st);
                       st="";
                        while (i<n && !isdigit(str[i])){
                            i++;
                        }
                  }
                  
              }
                 if (st.size()!=0)
                       sum+=stoi(st);
    	       return sum;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends