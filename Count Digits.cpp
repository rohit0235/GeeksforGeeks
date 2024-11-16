      string s= to_string(n);
            int count=0;
            for (int i=0;i<s.size();i++){
                if (s[i]=='0') continue;
                int p=s[i]-'0';
                if (n%p==0) count++;
                
            }
            return count;
                    
