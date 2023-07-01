void printSquare(int n) {
        int s=2*n-1;
        
        int l=0;
        int r=s-1;
        int t=0;
        int b=s-1;
        
        int pattern[s][s];
        
        
        while(n!=0)
        {
            for(int i=l;i<=r;i++)
              pattern[t][i]=n;
            
            for(int i=t;i<=b;i++)
              pattern[i][r]=n;
              
            for(int i=r;i>=l;i--)
              pattern[b][i]=n;
              
            for(int i=b;i>=t;i--)
              pattern[i][l]=n;
              
              l++;
              r--;
              t++;
              b--;
              
              n--;
        }
        
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<s;j++)
            {
                cout<<pattern[i][j]<<" ";
            }
            
            cout<<"\n";
        }
    }
