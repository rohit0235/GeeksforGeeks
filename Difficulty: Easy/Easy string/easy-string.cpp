//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    
cout << "~" << "\n";
}
return 0;
}


// } Driver Code Ends


string transform(string S){
    //complete the function here
    
       transform(S.begin(), S.end(), S.begin(), ::tolower); 
       
       string ans="";
       
       int n=S.size();
       int i=0;
       while (i<n){
                int count=1;
                char ch=S[i];
               while (i<n && S[i]==S[i+1]){
                        count+=1;   
                        i++;
               }
                 ans+=(to_string(count));
               ans+=ch;
             
               i++;
       }
       
       return ans;
               
     
       
       
       
             
    
} 

