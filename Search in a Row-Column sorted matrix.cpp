    int row=mat.size();
        int col=mat[0].size();
        
        for (int i=0;i<row;i++){
            
            for (int j=0;j<col;j++){
                
                if (mat[i][j]==x) return true;
                else if (mat[i][j]>x)  break;
            }
        }
        return false;
