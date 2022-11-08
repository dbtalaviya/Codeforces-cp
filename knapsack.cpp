
    //Knapsack o(k*n) 
       
    // you must have vector<pair<ll,ll>>v first weight second price
       
    ll dp[k+1][n];
    memset(dp,0,sizeof(dp));
    f(i,0,k+1)
    {
           // max sum
       f(j,0,n)
         {
             if(j>0)
                   {
                       dp[i][j]=dp[i][j-1];
                       if((i-v[j].first)>=0)
                       {
                           dp[i][j]=max(dp[i][j],(dp[i-v[j].first][j-1]+v[j].second+0ll));
                       }
                   }
                   else
                   {
                       if(v[j].first<=i)
                       {
                           dp[i][j]=v[j].second;
                       }
                   }   
               }
           }
           cout<<dp[k][n-1]<<endl;
